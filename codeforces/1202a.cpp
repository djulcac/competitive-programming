// 2022-11-05T16:10:56.426388
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	string x0,y0;
	cin>>x0>>y0;
	int i,j;
	for(j=0;j<y0.size();j++)if(y0[y0.size()-1-j]=='1')break;
	for(i=j;i<x0.size();i++)if(x0[x0.size()-1-i]=='1')break;
	return max(i-j,0);
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2