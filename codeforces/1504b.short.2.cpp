// 2022-11-07T23:25:09.893994
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n;cin>>n;
	string a,b;
	cin>>a>>b;
	ll x,y;
	bool ok=true;
	x=y=0;
	f(i,n){
		a[i]=='1'?x++:x--;
		b[i]=='1'?y++:y--;
		ok&=abs(x)==abs(y);
	}
	ok&=x==y;
	if(ok) return "YES";
	return "NO";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2