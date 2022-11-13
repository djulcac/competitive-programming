def solve():
    n,c=input().split(" ")
    n=int(n)
    s=input()
    s=2*s
    ans=0
    for i in range(len(s)//2):
        if s[i]==c:
            j=i
            while j<len(s) and s[j]!='g':
                j+=1
            ans=max(ans,j-i)
    return ans

def init():
    T=1
    T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()