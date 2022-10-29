MOD = 998244353
me=[[0]*2004 for i in range(2004)]
def coebin(n,k):
    global me
    if n==k or k==0:
        return 1
    if me[n][k]:
        return me[n][k]
    me[n][k]=(coebin(n-1,k-1)%MOD+coebin(n-1,k)%MOD)%MOD
    return me[n][k]
def solve():
    n,m,k=map(int,input().split())
    ans=m
    if not k: return m
    for i in range(k):
        ans=(ans*(m-1))%MOD
    coebin(n,k)
    ans=(ans*coebin(n-1,k)%MOD)
    return ans

def init():
    T=1
    # T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()