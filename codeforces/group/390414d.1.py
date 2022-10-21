def solve():
    n,m=map(int,input().split())
    mi=ma=0
    # min
    mi=(n-m+1)*(n-m)//2
    for i in range(m):
        if 2*(i+1)>=n:
            break
        t=i+1
        t+=(n-m-t+1)*(n-m-t)//2
        mi=min(t,mi)
    # max
    t1 = n//m
    c1 = n%m
    c2 = m-c1
    ma+=c1*t1*(t1+1)//2
    ma+=c2*t1*(t1-1)//2
    print(mi,ma)

def init():
    T=1
    # T=int(input())
    while T:
        solve()
        # print(solve())
        T -=1
init()