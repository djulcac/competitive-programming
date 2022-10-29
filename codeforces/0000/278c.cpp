#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 200

vector<ll>gr[2*N];
ll fl[2*N];
ll dfs(ll ix){
	// cout<<ix<<endl;
	fl[ix]=1;
	f(i,gr[ix].size()){
		if(!fl[gr[ix][i]])dfs(gr[ix][i]);
	}
	return 0;
}
ll solve(){
	ll n,m,t,k;
	cin>>n>>m;
	f(i,n){
		cin>>k;
		f(j,k){
			cin>>t;
			gr[i].push_back(N+t-1);
			gr[N+t-1].push_back(i);
		}
	}
	f(i,2*N)fl[i]=0;
	ll ans=0;
	f(i,n)if(!fl[i] && gr[i].size()>0)ans++,dfs(i);
	if(ans)ans--;
	f(i,n)if(!gr[i].size())ans++;
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