// 2022-11-13T15:53:00.290124
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 200005

vector<ll>g[N];
vector<ll>comp;
ll deg[N];
ll n,m;
ll used[N];
void dfs(ll v){
	used[v]=true;
	comp.push_back(v);
	for(auto it:g[v])
		if(!used[it])dfs(it);
}

ll solve(){
	ll x,y;
	cin>>n>>m;
	f(i,m){
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
		deg[x]++;
		deg[y]++;
	}
	ll ans=0;
	f(i,n){
		if(!used[i]){
			comp.clear();
			dfs(i);
			bool ok=1;
			for(auto it:comp)ok&=deg[it]==2;
			if(ok)ans++;
		}
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
//3.2