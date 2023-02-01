// 2022-11-26T08:23:18.524135
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn;
	ll a,b;
	cin>>n>>a>>b;
	if(n==a&&n==b)return "Yes";
	if(a+b+1<n)return "Yes";
	return "No";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
