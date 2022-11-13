// 2022-11-10T19:58:03.697610
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn,q;
	cin>>n>>q>>k;
	vector<ll>ve(n);
	f(i,n)cin>>ve[i];
	f(i,q){
		int l,r;
		cin>>l>>r;
		ll a,b,c;
		a=ve[l-1];b=ve[r-1];
		c=b-a-r+l;
		// cout<<ve[l]-2+k-ve[r-2]-1<<endl;
		cout<<a-1+k-b+c*2<<endl;
		// cout<<a<<" "<<b<<" "<<c<<endl;
		// cout<<ve[l]<<" "<<k<<" "<<ve[r-2]<<endl;
	}
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