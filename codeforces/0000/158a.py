def por(x):
	return x+"hola"
def solve():
	n,k=map(int,input().split(" "))
	a=list(map(int,input().split(" ")))
	ans=0
	for i in range(n):
		if a[i]>=a[k-1] and a[i]>0:
			ans+=1
	return ans

def init():
    T=1
    # T=int(input())
    while T:
        # solve()
        print(solve())
        T -=1
init()