def getSubSet(i,n):
    return bin(i)[2:].zfill(n)
def validate(index,m,n,k):
    s = [0]*k
    N = 0
    for i in range(len(index)):
        if index[i] == '1':
            N += 1
            for ik in range(k):
                if m[i][ik]:
                    s[ik] += 1
    for ik in range(k):
        if 2*s[ik] > N:
            return False
    return True
def getOrder(m,n,k):
    o = [[i,0] for i in range(n)]
    for i in range(n):
        for ik in range(k):
            if m[i][ik]:
                o[i][1] += 1
    o = sorted(o,key=lambda x:x[1])
    return [o[i][0] for i in range(n)]
def getSubSetOrder(v,l):
    s = ['0']*len(v)
    for i in range(l):
        s[v[i]] = '1'
    return "".join(s)
def solve(m,n,k):
    # for i in range(1,2**n):
    #     if validate(getSubSet(i,n),m,n,k):
    #         print("YES")
    #         return
    v = getOrder(m,n,k)
    for i in range(n):
        if validate(getSubSetOrder(v,i+1),m,n,k):
            print("YES")
            return
    print("NO")
[n,k]=[int(x) for x in input().split()]
m = [[None]*k for i in range(n)]
for i in range(n):
    m[i] = [int(x) for x in input().split()]
solve(m,n,k)
