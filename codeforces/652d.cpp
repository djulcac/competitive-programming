// 2022-11-09T04:46:08.093171
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
	vector<pair<ll,ll>>vt(n);
	f(i,n)cin>>vt[i].first>>vt[i].second;
	// f(i,n)cout<<vp[i].first<<" "<<vp[i].second<<endl;
	set<ll>st;
	f(i,n)st.insert(vt[i].first),st.insert(vt[i].second);
	int ii=1;
	map<ll,ll>mt;
	for(auto it:st)mt.insert(make_pair(it,ii++));
	vector<pair<ll,pair<ll,ll>>>vp(n);
	f(i,n){
		auto it0=mt.find(vt[i].first);
		auto it1=mt.find(vt[i].second);
		// vp.emplace_back(it1->second,it0->second);
		vp[i].first=it1->second;
		vp[i].second.first=it0->second;
		vp[i].second.second=i;
	}
	sort(vp.begin(),vp.end());
	// f(i,n)cout<<vp[i].first<<" "<<vp[i].second.first<<" "<<vp[i].second.second<<endl;
	Fenwick fen;
	fen.build(2*n);
	vector<ll>ans(n,0);
	f(i,n){
		ans[vp[i].second.second]=i-fen.get(vp[i].second.first);
		// cout<<":"<<i<<" "<<vp[i].second.first<<" "<<fen.get(vp[i].second.first)<<endl;
		fen.update(vp[i].second.first,1);
	}
	// fen.show();
	f(i,n)cout<<ans[i]<<endl;
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2