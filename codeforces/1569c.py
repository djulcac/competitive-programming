T=1
T=int(input())
while T:
    n=int(input())
    a=list(map(int,input().split()))
    a=sorted(a)
    i=1
    if a[n-1]-a[n-2]>1:
        print(0)
    else:
        seg_max=0
        MOD=998244353
        for i in range(n-1):
            if a[i]==a[n-2]:
                seg_max+=1
        if a[n-1]==a[n-2]:
            ans = 1
            for i in range(1,n+1):
                ans = (ans*i)%MOD
            print(ans)
        else:
            ans = 1
            for i in range(1,n+1):
                if i==seg_max+1:
                    ans = (ans*seg_max)%MOD
                else:
                    ans = (ans*i)%MOD
            print(ans)
    T -=1