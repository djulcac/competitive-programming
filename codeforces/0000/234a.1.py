def solve():
    n=int(input())
    s=input()
    print(n,s)
    # for i in range(int(n/2)):
    #     if s[i]=='L':print(i+1,int(n/2+i+1))
    #     else:print(int(n/2+i+1),i+1)
    

def init():
    T=1
    # T=int(input())
    while T:
        solve()
        # print(solve())
        T -=1
init()
