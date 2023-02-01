// 2022-11-26T14:51:19.436825
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 100005
ll solve(){
	ll n,k,m,nn;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	ll ans=ve[0];
	f(i,n)ans=__gcd(ans,ve[i]);
	if(ans==1)return ve[n-1];
	return ve[n-1]/ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
