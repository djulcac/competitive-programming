// 2022-11-04T04:52:20.020779
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,nn,m,k;
	string ns;
	cin>>ns>>k;
	string ans="";
	f(i,ns.size()){
		ll jma=i;
		int j;
		for(j=i;j<ns.size() && j-i<=k;j++)
			if(ns[j]-'0'>ns[jma]-'0')jma=j;
		ans+=ns[jma];
		for(int ii=jma;ii>i;ii--){
			char t=ns[ii-1];ns[ii-1]=ns[ii];ns[ii]=t;
		}
		k-=jma-i;
		// cout<<i<<" "<<ns<<" "<<jma<<" "<<k<<endl;
	}
	return ns;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2