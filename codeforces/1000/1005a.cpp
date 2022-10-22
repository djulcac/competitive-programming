#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define _f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define _f3(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,ans,a,b;
	cin>>n;
	cin>>a;
	ans=a;
	vector<ll>v;
	f(i,n-1){
		cin>>b;
		if(b<=a)ans++,v.push_back(a);
		a=b;
	}
	v.push_back(a);
	cout<<ans<<endl;
	f(i,v.size())cout<<v[i]<<" ";cout<<endl;
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//2
