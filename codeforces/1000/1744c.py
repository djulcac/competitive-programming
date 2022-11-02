def solve():
    n,c=input().split(" ")
    n=int(n)
    s=input()
    s=2*s
    ans=0
    ar=[]
    for i in range(len(s)):
        if s[i]=='g':
            ar.append(i)
    for i in range(len(s)//2):
        if s[i]==c:
            j=0
            while j<len(ar) and ar[j]<i:
                j+=1
            ans=max(ans,ar[j]-i)
    return ans

def init():
    T=1
    T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()