#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define MOD 1000000007

ll solve(){
	ll k;
	cin>>k;
	ll ans=6;
	ll b=16;
	// f(i,(b<<k)-2) ans=(ans*4)%MOD;
	f(i,k-1)ans=(ans*b)%MOD,b=(b*b)%MOD;
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