import os,sys,pathlib
import json

class Manage():
    name="template"
    language="cpp"
    # typeRun="run"
    judge="codeforces"
    validateN=1
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
        if "validateN" in config: self.validateN=config["validateN"] 
    def build(self):
        path=os.path.join(self.BASE_DIR,self.judge)
        command=''
        if self.language=='cpp':
            command=f'g++ {os.path.join(path,self.name)}.cpp -o {os.path.join(path,"a.out")}'
        print("command:",command)
        os.system(command)
        return True
    def run(self,i):
        path=os.path.join(self.BASE_DIR,self.judge)
        command=f'python3 {os.path.join(path,self.name)}.py < {os.path.join(path,self.name)}.in.{i}.txt'
        if self.language=='cpp':
            command=f'{os.path.join(path,"a.out")} < {os.path.join(path,self.name)}.in.{i}.txt'
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
                r=x.split(".")
                if len(r)!=4 or r[0]!=self.name or r[1]!='in' or r[3]!='txt': continue
                self.run(r[2])
    def getConfig(self):
        config={
            "judge":"codeforces",
            "name":"template",
            "language":"py",
            "validateN":1
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

# python manage.py all