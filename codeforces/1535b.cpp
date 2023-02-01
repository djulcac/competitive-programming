// 2022-11-29T18:45:27.521789
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	vector<ll>ve,vt;
	f(i,n){cin>>t;if(t%2)vt.emplace_back(t);else ve.emplace_back(t);}
	f(i,vt.size())ve.emplace_back(vt[i]);
	ll ans=0;
	f(i,n)for(int j=i+1;j<n;j++)
		if(__gcd(ve[i],2*ve[j])>1)ans++;
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
