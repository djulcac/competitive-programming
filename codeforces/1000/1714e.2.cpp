// 2022-11-02T20:38:02.459378
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,nn,m;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	bool b2,b12,b5;
	b2=b5=false;
	set<ll>se10;
	f(i,n){
		if(ve[i]%5==0){
			b5=true;
			se10.insert(ve[i]+ve[i]%10);
		}
		if(ve[i]%10!=0 && ve[i]%5!=0)b2=true;
	}
	// for(auto it:se10)cout<<it<<" ";cout<<endl;
	if(b5){
		if(b2 || se10.size()>1) return "NO";
		return "YES";
	}
	b2=b12=false;
	f(i,n){
		ll t=ve[i];
		while(t%10!=2)t=t+t%10;
		if(t%20==2)b2=true;
		else b12=true;
	}
	if(b2 && b12) return "NO";
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