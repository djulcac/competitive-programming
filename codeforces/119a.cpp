#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll a,b,n,m,k;
	int ans=1;
	cin>>a>>b>>n;
	while(n){
		if(ans){
			if(n-__gcd(n,a)<0)break;
			n-=__gcd(n,a);
			ans^=1;
		}else{
			if(n-__gcd(n,b)<0)break;
			n-=__gcd(n,b);
			ans^=1;
		}
	}
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
