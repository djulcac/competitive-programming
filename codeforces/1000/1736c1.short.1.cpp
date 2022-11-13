// 2022-11-02T04:46:41.786817
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n;cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	ll dp[n+1];f(i,n+1)dp[i]=0;
	F(i,1,n+1)dp[i]=min(dp[i-1]+1,ve[i-1]);
	ll ans=0;
	f(i,n+1)ans+=dp[i];
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