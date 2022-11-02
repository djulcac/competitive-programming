// 2022-10-31T12:59:50.230342
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m,k;
	cin>>n;
	string s;cin>>s;
	ll ar[n];f(i,n)cin>>ar[i];
	ll ans=0;
	F(i,1,n)if(s[i]=='1' && s[i-1]=='0' && ar[i]<ar[i-1])
		s[i-1]='1',s[i]='0';
	f(i,n)if(s[i]=='1')ans+=ar[i];
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