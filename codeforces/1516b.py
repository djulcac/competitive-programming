def f(value,step,agg):
    n = len(value)
    # print(n,step)
    if n - step < 2:
        return
    ans = []
    for i in range(step):
        ans.append(value[i])
    ans.append(value[step]^value[step+1])
    for i in range(step+2,n):
        ans.append(value[i])
    agg.append(ans)
    # f(ans,0,agg)
    # f(ans,step,agg)
    # f(ans,step+1,agg)
    # f(value,step+1,agg)
    for i in range(len(ans)):
        f(ans,i,agg)
    f(value,step+1,agg)
def solve():
    n = int(input())
    v = [int(e) for e in input().split()]
    print(n)
    print(v)
    print("-"*10)
    for i in range(n):
        print(bin(v[i])[2:].zfill(8))
    # for i in range(n):
    res = []
    f(v,0,res)
    print(":",res)
def init():
    T = 1
    T = int(input())
    while T:
        solve()
        # print(solve())
        T -= 1
init()
