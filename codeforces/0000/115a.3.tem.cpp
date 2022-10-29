#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 2003
ll fl[N];
vector<ll>gr[N];
ll dfs(ll x){
	if(fl[x]) return 0;
	fl[x]=true;
	ll ma=0;
	f(i,gr[x].size()){
		fl[i]=true;
		ma=max(ma,dfs(gr[x][i]));
	}
	return ma+1;
}
ll solve(){
	ll n,t;
	cin>>n;
	f(i,n){
		cin>>t;
		if(t!=-1)
			gr[t-1].push_back(i);
	}
	f(i,n)fl[i]=false;
	ll ans=0;
	f(i,n){
		ans=max(ans,dfs(i));
	}
	return ans;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3