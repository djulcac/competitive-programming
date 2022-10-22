def solve():
    n=int(input())
    di={}
    for i in range(n):
        ar=list(map(int,input().split()))
        ar=sorted(ar)
        k1=f"{ar[0]},{ar[1]}"
        k2=f"{ar[0]},{ar[2]}"
        k3=f"{ar[1]},{ar[2]}"
        if k1 in di: di[k1].append((ar[2],i))
        else: di[k1]=[(ar[2],i)]
        if k2 in di: di[k2].append((ar[1],i))
        else: di[k2]=[(ar[1],i)]
        if k3 in di: di[k3].append((ar[0],i))
        else: di[k3]=[(ar[0],i)]
    ans=(0,0,0)
    # print(di)
    for key in di:
        a,b=map(int,key.split(','))
        di[key]=sorted(di[key])
        i=len(di[key])-1
        while i>=0 and di[key][i][1]==di[key][-1][1]:
            i-=1
        if i>=0:
            r=min(min(di[key][-1][0]+di[key][i][0],a),b)
            if r>ans[0]:
                ans=r,di[key][-1][1],di[key][i][1]
        r=min(min(di[key][-1][0],a),b)
        if r>ans[0]:
            ans=r,di[key][-1][1],di[key][-1][1]
    if ans[1]==ans[2]:
        print(1)
        print(ans[1]+1)
    else:
        print(2)
        print(ans[1]+1,ans[2]+1)
def init():
    T=1
    # T=int(input())
    while T:
        solve()
        # print(solve())
        T -=1
init()