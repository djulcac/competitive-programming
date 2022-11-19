// 2022-11-18T15:34:40.004165
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll l,r,x,a,b,n,k,m,t,nn;
	cin>>l>>r>>x>>a>>b;
	if(a<b && r<0)return -1;
	if(a>b && l>0)return -1;
	ll d,ans;
	if(a<b){
		d=min(x,r);
		ans = (b-a)/d;
		if((b-a)%d)ans++;
		return ans;
	}
	d=min(-l,x);
	ans=(b-a)/d;
	if((b-a)%d)ans++;
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
