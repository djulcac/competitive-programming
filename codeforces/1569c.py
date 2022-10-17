def solve():
    n=int(input())
    a=list(map(int,input().split()))
    # ad={}
    # for i in range(n):
    #     key = str(a[i])
    #     if key in ad: ad[key]+=1
    #     else: ad[key]=1
    # al=[]
    # for key in ad:al.append({"value":ad[key],"key":key})
    # sorted(al,key=lambda x:x["value"])
    # for key in ad:al.append(ad[key])
    a=sorted(a)
    i=1
    while i<n:
        if a[i]-a[i-1]>1:return 0
        i+=1
    # la=a[1]
    # i=1,t=a[i],j=0
    la,i,t,j=[1],1,a[1],0
    while i<n:
        if a[i]==a[i-1]:la[j]+=1
        else:
            la.append(1)
            j+=1
        i+=1
    # contar de par en par y sacar modulo
    # tomar en cuenta la cantidad para saber que
    # tipo de combinatoria usar
    print(la)
    return n

def init():
    T=1
    T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()