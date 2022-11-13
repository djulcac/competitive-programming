// 2022-11-08T17:42:50.627525
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn;
	string s;cin>>s;
	cin>>n;
	if(s.size()%n)return "NO";
	nn=s.size()/n;
	f(i,n){
		for(int j=0;j<nn;j++){
			// cout<<s[i*nn+j]<<" "<<s[(i+1)*nn-j-1]<<endl;
			if(s[i*nn+j]!=s[(i+1)*nn-j-1]) return "NO";
		}
	}
	return "YES";
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2