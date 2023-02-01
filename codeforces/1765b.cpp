// 2022-11-27T05:51:33.039568
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn;
	cin>>n;
	string s;cin>>s;
	if(n%3==2)return "NO";
	for(int i=2;i<n;i+=3)
		if(s[i]!=s[i-1])return "NO";
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
