def solve():
    n,m=map(int,input().split())
    mi=m*(n//m-1)*(n//m)//2 + (n%m)*(n//m)
    ma=(n-m)*(n-m+1)//2
    print(mi,ma)

def init():
    T=1
    # T=int(input())
    while T:
        solve()
        # print(solve())
        T -=1
init()