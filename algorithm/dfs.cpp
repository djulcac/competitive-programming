#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

#define N 100

ll n,m;
vector<ll>g[N];
int used[N];
void dfs(int v){
	used[v]=1;
	//operation
	cout<<v<<" "<<endl;
	for(auto it:g[v])if(!used[it])dfs(it);
}

class Graph{
	public:
	int n;
	vector<vector<int>>g;
	vector<int>u;
	void build(int x){
		n=x;
		g.resize(n);
		u.resize(n);
	}
	void add(int a,int b){
		a--;b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	void dfs(int v){
		u[v]=1;
		for(auto q:g[v])if(!u[v])dfs(q);
	}
};

ll solve1(){
	ll n,m,k;
	cin>>n>>m;
	ll x,y;
	f(i,m){
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	f(i,n)if(!used[i])dfs(i);
	return 0;
}
ll solve(){
	ll n,m,k;
	cin>>n>>m;
	ll x,y;
	Graph g;
	g.build(n);
	f(i,m){
		cin>>x>>y;
		g.add(x,y);
	}
	f(i,n)if(!g.u[i])dfs(i);
	return 0;
}	

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1
