def dp(l,r,A,B,sufix):
    if r-l<2:
        if sufix[l]-sufix[l-1]:
            return B
        return A
    ans = A
    if sufix[r-1]-sufix[l-1]:
        ans = (r-l)*B*(sufix[r-1]-sufix[l-1])
    mid = int((r+l)/2)
    res = dp(l,mid,A,B,sufix) + dp(mid,r,A,B,sufix)
    return min(ans,res)
def solve():
    # [n,k,A,B]=[int(x) for x in input().split()]
    n,k,A,B=map(int,input().split())
    # v = [int(x) for x in input().split()]
    v=list(map(int,input().split()))
    N=(1<<n)
    p = [0]*N
    for i in range(k):
        p[v[i]-1]+=1 # ojo +=
    sufix = [0]*(N+1)
    for i in range(N):
        sufix[i+1] = sufix[i]+p[i]
    return dp(1,N+1,A,B,sufix)

def init():
    T=1
    # T=int(input())
    while T:
        print(solve())
        T-=1
init()
