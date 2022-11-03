// 2022-11-02T20:38:02.459378
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n;cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	set<ll>se;
	f(i,n){
		ll t=ve[i];
		while(t%10 && t%10!=2)t+=t%10;
		if(t%10)t%=20;
		se.insert(t);
	}
	if(se.size()>1)return "NO";
	return "YES";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2