#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m,k,a,b,h,w;
	cin>>n;
	h=w=0;
	f(i,n){
		cin>>a>>b;
		h=max(h,max(a,b));
		w+=min(a,b);
	}
	return 2*(w+h);
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1