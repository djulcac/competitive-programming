// 2022-11-08T14:13:32.726104
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n>>k;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	ll mask[31];f(i,31)mask[i]=0;
	f(i,n)f(j,31)if((1<<j)&ve[i])mask[j]++;
	F(i,30,-1)if(n-mask[i]<=k)k-=n-mask[i],mask[i]=n;
	ll ans=0;
	f(i,31)if(mask[i]==n)ans+=(1<<i);
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