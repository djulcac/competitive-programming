MOD = 998244353
me=[[0]*2004 for i in range(2004)]
def coebin(n,k):
    global me
    if n==k or k==0:
        me[n][k]=1
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
    # for i in range(k+1,n):
    #     ans=(ans*i)%MOD
    coebin(2002,2001)
    # if k>n:
    #     ans=(ans*coebin(n-1,n-1)%MOD)
    # else:
    #     ans=(ans*coebin(n-1,k)%MOD)
    ans=(ans*me[n-1][k]%MOD)
    for i in range(10):
        for ik in range(10):
            print(me[i][ik],end=' ')
        print()
    return ans

def init():
    T=1
    # T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()