import math
T=1
T=int(input())
while T:
    n=int(input())
    a=list(map(int,input().split()))
    a=sorted(a)
    i=1
    if a[n-1]-a[n-2]>1:
        print(0)
    else:
        seg_max=0
        for i in range(n-1):
            if a[i]==a[n-2]:
                seg_max+=1
        if a[n-1]==a[n-2]:
            print(math.factorial(n)%998244353)
        else:
            print(math.factorial(n)*seg_max//(seg_max+1)%998244353)
    T -=1