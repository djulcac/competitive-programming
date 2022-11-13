// 2022-11-02T04:46:41.786817
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,nn,m;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	int ib,jb,t,ic;
	ll ans=0;
	ic=1;
	int tt=0;
	for(int i=0;i<n;){
		// cout<<"i"<<i<<endl;
		for(int j=i;j<n;j++){
			if(ve[j]<j-i+1)break;
			jb=j;
		}
		// cout<<"j"<<jb<<endl;
		t=jb-i+1;
		// cout<<"ans="<<ans<<" "<<jb<<" "<<i<<endl;
		ans=ans+t*(t+1)/2;
		// cout<<"ans"<<ans<<" "<<jb<<" "<<i<<endl;
		if(i==jb)i++;
		else i=jb+1-ve[jb+1];
		// t=ve[jb]-1;
		// cout<<"jb"<<ans<<" "<<jb<<" "<<t<<endl;
		if(jb==n-1)break;
		t=ve[jb+1]-1;
		ans-=t*(t+1)/2;
		// if(tt>5)break;
		// tt++;
	}
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