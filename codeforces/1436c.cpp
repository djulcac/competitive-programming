// 2022-11-14T05:17:42.835690
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

vector<ll>vi;
ll mod = 1000000007;

bool bs(int n,int x){
	int l=0;
	int r=n;
	int m;
	while(l<r){
		m=(l+r)/2;
		vi.push_back(m);
		if(m<=x)l=m+1;
		else r=m;
	}
	if(l>0 && l-1==x)return 1;
	return 0;
}
ll comb(ll n,ll r){
	ll ans=1;
	f(i,r){
		ans*=(n-i)/(1+i);
		ans%=mod;
	}
	return ans;
}
ll comb1(ll n,ll r){
	ll ans=1;
	f(i,n)ans*=i+1;
	f(i,r)ans/=i+1;
	F(i,r,n)ans/=i-r+1;
	return ans;
}

ll fact(ll n){
	ll ans=1;
	f(i,n){ans*=i+1;ans%=mod;}
	return ans;
}

ll solve(){
	ll n,k,m,t,nn;
	ll x,pos;
	cin>>n>>x>>pos;
	bs(n,pos);
	f(i,vi.size())cout<<vi[i]<<" ";cout<<endl;
	int me=0,ma=0;
	f(i,vi.size())if(vi[i]<pos)me++;
	else if(vi[i]>pos)ma++;
	cout<<ma<<"-"<<me<<endl;
	ll ng=n-x,nl=x-1;
	if(ma>n-x||me>=x)return 0;
	cout<<ng<<" "<<ma<<endl;
	cout<<comb(ng,ma)<<endl;
	cout<<nl<<" "<<me<<endl;
	cout<<comb(nl,me)<<endl;
	ll ans=comb(ng,ma)*comb(nl,me);
	ans%=mod;
	/*for(int i=1;i<=n-ma-me-1;i++){
		ans*=i;
		ans%=mod;
	}*/
	ans*=fact(me);ans%=mod;
	ans*=fact(ma);ans%=mod;
//	ans*=fact(ng-ma);ans%=mod;
//	ans*=fact(nl-me);ans%=mod;
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
