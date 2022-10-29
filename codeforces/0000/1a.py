def solve():
    n,m,a=map(int,input().split())
    c1=n//a
    if n%a: c1+=1
    c2=m//a
    if m%a: c2+=1
    return c1*c2

def init():
    T=1
    # T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()