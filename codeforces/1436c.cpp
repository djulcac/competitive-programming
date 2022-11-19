// 2022-11-14T05:17:42.835690
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

vector<ll>vi;
bool bs(int n,int x){
	int l=0;
	int r=n;
	int m;
	while(l<r){
		m=(l+r)/2;
		vi.push_back(m+1);
		if(m+1<=x)l=m+1;
		else r=m;
	}
	if(l>0 && l-1==x)return 1;
	return 0;
}
ll solve(){
	ll n,k,m,t,nn;
	ll x,pos;
	cin>>n>>x>>pos;
	bs(n,pos);
	f(i,vi.size())cout<<vi[i]<<" ";cout<<endl;
	int me=0,ma;
	f(i,vi.size())if(vi[i]<=x)me++;
	ma=n-me;
	ll ans=1;
	f(i,k
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
