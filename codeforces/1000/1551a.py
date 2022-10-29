def solve():
    n=int(input())
    uno=dos=int(n/3)
    if n%3 == 1:
        uno +=1
    if n%3 == 2:
        dos += 1
    print(uno,dos)

def init():
    T=1
    T=int(input())
    while T:
        solve()
        # print(solve())
        T -=1
init()