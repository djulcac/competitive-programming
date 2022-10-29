#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll conjeture(ll x){
	ll ans=1;
	if(x==1)return 1;
	if(x%2) return 1+conjeture(3*x+1);
	return conjeture(x/2)+1;
}

ll solve(ll a,ll b){
	ll mi=min(a,b),ma=max(a,b);
	ll ans=conjeture(mi);
	F(i,mi+1,ma+1)ans=max(ans,conjeture(i));
	cout<<a<<" "<<b<<" "<<ans<<endl;
	return 0;
}

int main(){
	ll T = 1,a,b;
	// cin>>T;
	while(cin>>a>>b)solve(a,b);
	// while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3