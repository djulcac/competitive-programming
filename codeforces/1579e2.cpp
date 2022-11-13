// 2022-11-09T01:55:24.854152
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

class Fenwick{
	public:
	int n;
	vector<ll>ve;
	void build(int x){n=x+1;ve.resize(n,0);}
	ll ope(ll a,ll b){return a+b;}
	void update(int p,ll x){
		for(int i=p;i<n;i+=i&-i)
			ve[i]=ope(ve[i],x);
	}
	ll get(int p){
		ll ans=0;
		for(int i=p;i;i-=i&-i)
			ans=ope(ans,ve[i]);
		return ans;
	}
	void show(){
		f(i,n)cout<<ve[i]<<" ";cout<<endl;
	}
};

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	vector<ll>ve0(n);
	for(ll &x:ve0)cin>>x;
	set<int>st;
	f(i,n)st.insert(ve0[i]);
	map<int,int>mt;
	int ii=1;
	for(auto it:st)mt.insert(make_pair(it,ii++));
	vector<ll>ve(n);
	f(i,n){
		auto it=mt.find(ve0[i]);
		ve[i]=it->second;
		// cout<<":"<<it->second<<" "<<it->first<<endl;
	}
	// f(i,n)cout<<ve0[i]<<" ";cout<<endl;
	// f(i,n)cout<<ve[i]<<" ";cout<<endl;
	// for(auto it:st)cout<<it<<" ";cout<<endl;
	// for(auto it:mt)cout<<it.first<<" "<<it.second<<endl;
	Fenwick fen;
	fen.build(n);
	ll ans=0;
	f(i,n){
		ans+=min(i-fen.get(ve[i]),fen.get(ve[i]-1));
		// cout<<i<<": "<<ans<<endl;
		fen.update(ve[i],1);
		// f(j,n)cout<<fen.get(ve[j])<<" ";cout<<endl;
		// fen.show();
	}
	// f(i,n)cout<<ve0[i]<<" ";cout<<endl;
	// f(i,n)cout<<ve[i]<<" ";cout<<endl;
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