MOD = 998244353
me=[[0]*2004 for i in range(2004)]
def coebin(n,k):
    global me
    if n==k or k==0:
        me[n][k]=1
    for i in range(n):
        me[i][0]=1
    for i in range(1,n):
        me[i][1]=i
    for i in range(2,k):
        me[i][i]=1
    for i in range(3,n):
        for j in range(2,n+1):
            if j<=k:
                me[i][j]=(me[i-1][j-1]+me[i-1][j])%MOD
    return me[n][k]
def solve():
    n,m,k=map(int,input().split())
    ans=m
    if not k: return m
    for i in range(k):
        ans=(ans*(m-1))%MOD
    coebin(2000,2000)
    ans=(ans*me[n-1][k]%MOD)
    return ans

def init():
    T=1
    # T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()