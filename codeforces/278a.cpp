#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n;
	cin>>n;
	ll ar[n];
	f(i,n)cin>>ar[i];
	ll ans1=0,ans2=0;
	ll a,b,i,t;
	cin>>a>>b;
	a--;b--;
	if(a>b)t=a,a=b,b=t;
	i=a;
	while(i!=b)ans1+=ar[i],i=(i+1)%n;
	i=b;
	while(i!=a)ans2+=ar[i],i=(i+1)%n;
	return min(ans1,ans2);
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3