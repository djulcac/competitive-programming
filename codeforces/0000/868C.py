def getSubSet(i,n):
    return bin(i)[2:].zfill(n)
def validate(index,m,n,k):
    s = [0]*k
    N = 0
    for i in range(n):
        if index[i] == '1':
            N += 1
            for ik in range(k):
                if m[i][ik]:
                    s[ik] += 1
    for ik in range(k):
        if 2*s[ik] > N:
            return False
    return True
def solve(m,n,k):
    for i in range(1,2**n):
        if validate(getSubSet(i,n),m,n,k):
            print("YES")
            return
    print("NO")
[n,k]=[int(x) for x in input().split()]
m = [[None]*k for i in range(n)]
mdic = set()
for i in range(n):
    s = input()
    if s in mdic:
        continue
    m[len(mdic)] = [int(x) for x in s.split()]
    mdic.add(s)
solve(m,len(mdic),k)
