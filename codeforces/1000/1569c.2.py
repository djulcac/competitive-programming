import math
def solve():
    n=int(input())
    a=list(map(int,input().split()))
    a=sorted(a)
    i=1
    if a[n-1]-a[n-2]>1:return 0
    seg_max=0
    for i in range(n-1):
        if a[i]==a[n-2]:
            seg_max+=1
    if a[n-1]==a[n-2]:
        return math.factorial(n)%998244353
    return math.factorial(n)*seg_max//(seg_max+1)%998244353
def init():
    T=1
    T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()