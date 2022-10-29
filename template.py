def solve():
    n=int(input())
    a=list(map(int,input().split()))
    return n

def init():
    T=1
    # T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()