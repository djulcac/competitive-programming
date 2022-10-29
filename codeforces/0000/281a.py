def solve():
    s=input()
    return s[0].upper()+s[1:]

def init():
    T=1
    # T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()