#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

#define N 100

ll fen[N];
void build(){f(i,N)fen[i]=0;}
ll ope(ll a,ll b){return a+b;}//sum
void update(ll p,ll val){
	for(int i=p;i<N;i+=i&-i)
		fen[i]=ope(fen[i],val);
}
ll getVal(ll p){
	ll ans=0;
	for(int i=p;i;i-=i&-i)
		ans=ope(ans,fen[i]);
	return ans;
}

class Fenwick1{
	public:
		int n;
		vector<ll>ve;
		void build(int n0){
			n=n0+1;
			vector<ll>t(n,0);
			ve=t;
		}
		ll ope(ll a, ll b){return a+b;} //sum
		void update(int p,ll val){
			for(int i=p;i<n;i+=i&-i)
				ve[i]=ope(ve[i],val);
		}
		ll get(int p){
			ll ans=0;
			for(int i=p;i;i-=i&-i)
				ans=ope(ans,ve[i]);
			return ans;
		}
};

class Fenwick2{
	public:
	int n;
	vector<ll>ve;
	void build(int x){n=x+1;ve.resize(n,0);}
	ll ope(ll a,ll b){return a+b;}
	void update(int p,ll val){
		for(int i=p;i<n;i+=i&-i)
			ve[i]=ope(ve[i],val);
	}
	ll get(int p){
		ll ans=0;
		for(int i=0;i;i-=i&-i)
			ans=ope(ans,ve[i]);
		return ans;
	}
};

ll solve(){
	ll n,m,k;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	build();
	f(i,n)update(i+1,ve[i]);
	f(i,n)cout<<ve[i]<<" ";cout<<endl;
	f(i,n)cout<<getVal(i+1)<<" ";cout<<endl;
	cout<<"class:"<<endl;
	Fenwick1 fen;
	fen.build(n);
	cout<<"build ok"<<endl;
	f(i,n)cout<<fen.ve[i]<<" ";cout<<endl;
	f(i,n)cout<<ve[i]<<" ";cout<<endl;
	f(i,n)fen.update(i+1,ve[i]);
	cout<<"update ok"<<endl;
	f(i,n)cout<<fen.get(i+1)<<" ";cout<<endl;
	cout<<"fenwick 2"<<endl;
	Fenwick2 fen2;
	fen2.build(n);
	f(i,n)fen2.update(i+1,ve[i]);
	f(i,n)cout<<fen2.get(i+1)<<" ";cout<<endl;
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