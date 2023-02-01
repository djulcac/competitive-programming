// 2022-11-28T12:08:37.724808
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	ll x,y,B;
	cin>>n>>B>>x>>y;
	ll ans=0;t=0;
	f(i,n)if(t+x<=B)t+=x,ans+=t;
	else t-=y,ans+=t;
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
