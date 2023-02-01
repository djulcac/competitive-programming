// 2022-11-27T08:30:29.841630
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n>>m;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	sort(ve.begin(),ve.end());
	ll ans=0;
	f(i,n)ans+=ve[i];
	F(i,1,n)if(ve[i]>=m||ve[i]+ve[i-1]>m)ans++;
	ans++;
	return ans;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
