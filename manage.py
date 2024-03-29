import os,sys,pathlib
import json
from datetime import datetime

import requests
from bs4 import BeautifulSoup

class Manage():
    # name="template"
    # language="cpp"
    # # typeRun="run"
    # judge="codeforces"
    # validateN=1
    BASE_DIR=""
    configName="config.log.json"

    def __init__(self):
        self.BASE_DIR=pathlib.Path(__file__).parent
        config=self.getConfig()
        # print("config",config)
        if "name" in config: self.name=config["name"]
        if "language" in config: self.language=config["language"]
        # if "typeRun" in config: self.typeRun=config["typeRun"]
        if "judge" in config: self.judge=config["judge"] 
        if "isContest" in config: self.isContest=config["isContest"]
        if "isTest" in config: self.isTest=config["isTest"]

    def build(self):
        path=os.path.join(self.BASE_DIR,self.judge)
        logName=''
        if self.isTest:
            logName='.log'
        command=''
        if self.language=='cpp':
            command=f'g++ {os.path.join(path,self.name)}{logName}.cpp -o {os.path.join(path,"a.out")}'
        print("command:",command)
        os.system(command)
        return True

    def run(self,i):
        path=os.path.join(self.BASE_DIR,self.judge)
        logName=''
        if self.isTest:
            logName='.log'
        command=f'python3 {os.path.join(path,self.name)}.py < {os.path.join(path,self.name)}{logName}.in.{i}.txt'
        if self.language=='cpp':
            command=f'{os.path.join(path,"a.out")} < {os.path.join(path,self.name)}{logName}.in.{i}.txt'
        print("command:",command)
        print("="*7,i)
        os.system(command)
        print("="*7)
        return True

    def validate(self):
        path=os.path.join(self.BASE_DIR,self.judge)
        for x in os.listdir(path):
            # print(x,os.path.isfile(os.path.join(path,x)))
            if os.path.isfile(os.path.join(path,x)):
                if self.isTest:
                    r=x.split(".")
                    if len(r)!=5 or r[0]!=self.name or r[2]!='in' or r[4]!='txt': continue
                    self.run(r[3])
                else:
                    r=x.split(".")
                    if len(r)!=4 or r[0]!=self.name or r[1]!='in' or r[3]!='txt': continue
                    self.run(r[2])

    def setParams(self,params):
        config=self.getConfig()
        for x in ["name","language","judge"]:
            if x in params:
                config[x]=params[x]
        json_object = json.dumps(config, indent=4) 
        with open("config.log.json", "w") as outfile:
            outfile.write(json_object)

    def init(self):
        if self.judge == 'codeforces':
            path=os.path.join(self.BASE_DIR,self.judge)
            logName=''
            if self.isTest:
                logName='.log'
            #valida si ya existe el archivo
            if not self.isTest and  os.path.exists(os.path.join(path,f"{self.name}.{self.language}")):
                print("Ya existe el archivo")
                return
            #start
            i = 0
            while self.name[i] in '0123456789':
                i+=1
            urlName=f'https://codeforces.com/problemset/problem/{self.name[:i]}/{self.name[i:].upper()}?f0a28=1'
            if self.isContest:
                urlName=f'https://codeforces.com/contest/{self.name[:i]}/problem/{self.name[i:].upper()}'
            # print(urlName)
            print("Moviendo template")
            fileName=os.path.join(path,f"{self.name}{logName}.{self.language}")
            comment = "#"
            if self.language=='cpp':
                comment="//"
            command=f'echo "{comment} {datetime.now().isoformat()}" >  {fileName}'
            # command=f'cp "\n# bien" >>  {fileName}'
            os.system(command)
            command=f'cat {os.path.join(self.BASE_DIR,f"template.{self.language}")} >>  {fileName}'
            os.system(command)
            print("Obteniendo datos")
            x = requests.get(urlName)
            print("Guardando contenido")# datos
            name = os.path.join(path,f"{self.name}.data.log.html")
            with open(name,"w") as outfile:
                outfile.write(x.text)
            #print(x.text)
            html = BeautifulSoup(x.text, 'html.parser')
            #print(332,html)
            name = os.path.join(path,f"{self.name}.data.short.log.md")
            with open(name,"w") as outfile:
                x = html.find_all("div",{"class":"problem-statement"})
                if len(x)>0:outfile.write(str(x[0]))
            #print(333,x)
            name = os.path.join(path,f"data.log.md")
            with open(name,"w") as outfile:
                x = html.find_all("div",{"class":"problem-statement"})
                if len(x)>0:outfile.write(str(x[0]))
            # print(x.status_code)
            test = html.find_all("div",{"class":"sample-test"})
            print(334,test)
            if len(test)>0:test=test[0]
            testInput = test.find_all("div",{"class":"input"})
            testOutput = test.find_all("div",{"class":"output"})
            print("Generando inputs outputs")
            for i in range(len(testInput)):
                xi = testInput[i]
                xo = testOutput[i]
                for br in xi.pre.find_all("br"):
                    br.replace_with("\n")
                name = os.path.join(path,f"{self.name}{logName}.in.{str(i+1)}.txt")
                with open(name,"w") as outfile:
                    outfile.write(xi.pre.getText())
                # print(xi.pre.getText(),'-----',i)
                for br in xo.pre.find_all("br"):
                    br.replace_with("\n")
                name = os.path.join(path,f"{self.name}{logName}.out.{str(i+1)}.txt")
                with open(name,"w") as outfile:
                    outfile.write(xo.pre.getText())
                # print(xo.pre.getText(),'####',i)
            # print(html.title)
            print("Inicializado")

    def getConfig(self):
        config={
            "judge":"codeforces",
            "name":"template",
            "language":"py",
            "isContest":False,
            "isTest":False
        }
        path = os.path.join(self.BASE_DIR,self.configName)
        if os.path.isfile(path):
            with open(path,"r") as f:
                data = json.load(f)
                self.updateJson(data,config,"config")
        return config
    def updateJson(self,source,target,base):
        for key in source:
            if key in target:
                if type(target[key]) == type({}) and type(source[key])==type({}):
                    updateJson(source[key],target[key],base+'.'+key)
                elif type(target[key])==type(source[key]):
                    target[key] = source[key]
                else:
                    print("Error(342.38004029413327): updateJson:",base+"."+key,"target:",type(target[key]),"source",type(source[key]))

def getParams(ix):
    ans = {}
    for i in range(ix,len(sys.argv)):
        t=sys.argv[i].split("=")
        if len(t)!=2:
            continue
        ans[t[0]]=t[1]
    return ans

def init():
    ma=Manage()
    if len(sys.argv)>1:
        if sys.argv[1]=='build':
            print("build..")
            ma.build()
        if sys.argv[1]=='validate':
            print("validate..")
            ma.validate()
        if sys.argv[1].split('=')[0]=='run':
            print("run..")
            ma.run(sys.argv[1].split('=')[1])
        if sys.argv[1]=='all':
            print("build..")
            ma.build()
            print("validate..")
            ma.validate()
        if sys.argv[1] == 'set':
            print("set...")
            ma.setParams(getParams(2))
        if sys.argv[1] == 'init':
            print("init...")
            ma.init()
        if sys.argv[1] == 'test':
            print("test...")
            ma.test()
init()
# python manage.py all
