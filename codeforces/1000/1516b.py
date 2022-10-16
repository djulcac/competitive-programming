def solve():
    n = int(input())
    v = [int(e) for e in input().split()]
    x,y,c=0,0,0
    for i in range(0,n): x^=v[i]
    for i in range(n-1,-1,-1):
        y^=v[i]
        if y==x:
            c+=1
            y=0
    if not x or c>1 : return "YES"
    return "NO"
def init():
    T = 1
    T = int(input())
    while T:
        # solve()
        print(solve())
        T -= 1
init()
