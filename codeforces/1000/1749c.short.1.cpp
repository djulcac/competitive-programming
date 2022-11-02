// 2022-11-01T02:11:30.867528
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	ll ans=0;
	F(k,1,n+1){
		multiset<ll>mu(ve.begin(),ve.end());
		f(i,k){
			auto it=mu.upper_bound(k-i);
			if(it==mu.begin())break;
			mu.erase(--it);
			if(!mu.empty()){
				ll x=*mu.begin();
				mu.erase(mu.begin());
				mu.insert(x+k-i);
			}
		}
		if(mu.size()+k==n)ans=k;
	}
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1