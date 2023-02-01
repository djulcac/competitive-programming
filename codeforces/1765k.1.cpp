// 2022-11-27T07:38:37.552038
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,nn;
	cin>>n;
	vector<ll>vm[n];
	f(i,n){
		vm[i].resize(n);
		for(ll &x:vm[i])cin>>x;
	}
	ll ans=0;
	for(int i=0;i<n-2;i++)
		f(j,n)ans+=vm[i][j];
	ll tm=0,t=0;
	cout<<"ans"<<ans<<endl;
	for(int i=0;i<n;i++){
		t=0;
		F(j,i,n)t+=vm[i][j];
		for(int j=0;j<=i;j++)t+=vm[i][j];
		tm=max(tm,t);
	}
	return ans+tm;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
