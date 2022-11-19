// 2022-11-16T11:19:01.110438
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

int solve(){
	ll n,k,m,t,nn;
	string a,b;
	cin>>a>>b;
	f(i,a.size())a[i]=tolower(a[i]),b[i]=tolower(b[i]);
	f(i,a.size()){
		if(a[i]>b[i])return 1;
		if(a[i]<b[i])return -1;
	}
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
