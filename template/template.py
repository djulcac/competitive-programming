def solve():
    [n,k]=[int(x) for x in input().split()]
    m = [[None]*k for i in range(n)]
    print("YES")

def init():
    T=1
    T=int(input())
    while T-=1:
        solve()