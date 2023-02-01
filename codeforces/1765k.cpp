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
	for(int i=0;i<n;i++)
		f(j,n)ans+=vm[i][j];
	ll mi=vm[n-1][0];
	f(i,n)mi=min(mi,vm[i][n-1-i]);
	return ans-mi;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
