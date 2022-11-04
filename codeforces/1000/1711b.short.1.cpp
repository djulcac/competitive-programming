// 2022-11-03T17:53:54.843237
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m;
	cin>>n>>m;
	vector<ll>va(n),vg(n,0);
	vector<pair<ll,ll>>vp;
	for(ll &x:va)cin>>x;
	f(i,m){
		ll a,b;
		cin>>a>>b;
		vg[a-1]++;vg[b-1]++;
		vp.push_back(make_pair(a-1,b-1));
	}
	ll ans=10000007;
	if(m%2==0)ans=0;
	f(i,n)if(vg[i]%2)ans=min(ans,va[i]);
	f(i,m)if(vg[vp[i].first]%2==0 && vg[vp[i].second]%2==0)
		ans=min(ans,va[vp[i].first]+va[vp[i].second]);
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