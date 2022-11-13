// 2022-10-30T17:23:10.390281
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 200005
ll di[N];
void build(){
	f(i,N)di[i]=0;
	F(i,1,N)if(i%2==0)di[i]=1+di[i/2];
}
ll solve(){
	ll n,m,k;
	cin>>n;
	ll ar[n];
	f(i,n)cin>>ar[i];
	f(i,n)cout<<ar[i]<<",";cout<<endl;
	ll ac=0;
	f(i,n)while(ar[i]%2==0)ac++,ar[i]=ar[i]/2;
	// f(i,n)ac+=di[ar[i]];
	cout<<"ac "<<ac<<endl;
	ll ans=0;
	ll it=n;
	while(it>0 && ac<n){
		ac+=di[it];
		if(di[it])ans++;
		it--;
	}
	cout<<ac<<"-------"<<ans<<endl;
	if(ac>=n)return ans;
	return -1;
}

int main(){
	ll T = 1;
	build();
	f(i,10)cout<<di[i]<<" ";cout<<endl;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1