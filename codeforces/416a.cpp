// 2022-11-12T11:49:26.505742
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn;
	cin>>n;
	ll l,r;
	r=2000000000;
	l=-2000000000;
	f(i,n){
		string s,yn;cin>>s;
		ll x;cin>>x>>yn;
		if(yn=="N"){
			if(s==">")s="<=";
			else if(s=="<")s=">=";
			else if(s==">=")s="<";
			else s=">";
		}
		if(s==">")l=max(x+1,l);
		else if(s=="<")r=min(x-1,r);
		else if(s==">=")l=max(x,l);
		else r=min(x,r);
		// cout<<l<<" "<<r<<endl;
	}
	if(l<=r)return to_string(l);
	return "Impossible";
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2