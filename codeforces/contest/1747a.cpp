// 2022-11-04T14:37:42.036984
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,nn,m,su1,su2,t;
	cin>>n;
	su1=su2=0;
	f(i,n){
		cin>>t;
		if(t>0)su1+=t;
		else su2-=t;
	}
	return abs(su1-su2);
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2