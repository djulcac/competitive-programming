// 2022-11-09T17:04:36.345138
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn,a,b,c;
	cin>>a>>b>>c;
	bool ok=false;
	for(int i=0;i*a<=c && !ok;i++)
		for(int j=0;i*a+j*b<=c && !ok;j++)
			if(i*a+j*b==c)ok=true;
	if(ok) return "Yes";
	return "No";
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2