#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	int n,k,m,t,nn;
	cin>>n;
	int ans=0,d[3];
	f(i,3)d[i]=0;
	f(i,n){
		cin>>t;
		d[t%3]++;
	}
	ans+=d[0]+min(d[1],d[2]);
	t=max(d[1],d[2])-min(d[1],d[2]);
	ans+=t/3;
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
