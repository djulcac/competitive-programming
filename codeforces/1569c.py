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
    # print(la)
    t=len(la)-1
    while t>=0:
        if la[t]>1:
            break
        t-=1
    if t<0:t=0
    ans_sum = 0
    i=t
    while i>=0:
        ans_sum += la[i]
        i-=1
    if ans_sum==1:return 1
    print("cc.1",t,la,ans_sum)
    ans=[1]*(len(la)-t+1)
    # print("cc.2",ans)
    MOD=998244353
    for i in range(ans_sum):
        ans[0]=(ans[0]*(i+1))%MOD
    ans[1]=(ans[0]*ans_sum)%MOD
    print("cc.3",ans)
    for i in range(2,t+1):
        print("gggg",i)
        ans[i]=(ans[i-2]*ans_sum*(ans_sum+1)/2)%MOD
    return ans[-1]

def init():
    T=1
    T=int(input())
    while T:
        # solve()
        print("gg",solve())
        T -=1
init()