// 2022-11-11T14:03:54.025302
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string a,b;
ll div(string s,ll mod){
	f(i,s.size())if(s[i]!=a[i%mod])return 0;
	return 1;
}
ll solve(){
	ll n,k,m,t,nn;
	cin>>a>>b;
	nn=a.size()+b.size();
	ll ans=0;
	F(i,1,nn)if(a.size()%i==0 && b.size()%i==0)
		ans += (div(a,i)&div(b,i));
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