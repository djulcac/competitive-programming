// 2022-10-31T18:33:51.645109
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 1003

ll gcd1[N][N];
void build(){
	f(i,N)f(j,N)gcd1[i][j]=0;
	f(i,N)f(j,N)if(__gcd(i,j)==1)
		gcd1[i][j]=1;
}

ll solve(){
	ll n,m,k;
	cin>>n;
	ll ar[n];f(i,n)cin>>ar[i];
	ll ma[N];f(i,N)ma[i]=0;
	f(i,n)ma[ar[i]]=i+1;
	ll ans=-1;
	f(x,N)f(y,N)if(ma[x] && ma[y] && gcd1[x][y])ans=max(ans,ma[x]+ma[y]);
	return ans;
}

int main(){
	ll T = 1;
	build();
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1