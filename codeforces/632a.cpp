// 2022-11-09T17:12:01.952525
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn,p;
	cin>>n>>p;
	string s[n];f(i,n)cin>>s[i];
	ll ans=0;
	ll money=0;
	f(i,n)if(s[n-1-i]=="halfplus") money+=2*ans+1,ans=2*ans+1;
	else money+=2*ans,ans*=2;
	return money*p/2;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2