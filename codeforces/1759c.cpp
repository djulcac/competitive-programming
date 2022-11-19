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
	if(b==a)return 0;
	if(b<l || b>r || a-x<l || a+x>r)return -1;
	ll dmo=b-a-x;
	if(abs(b-a)>x)return 1;
	if(abs(b-l)<dmo || abs(r-b)<dmo)return -1;
	if(a<b)if(abs(b-l)<x)return 3;else return 2;
	if(abs(b-r)<x)return 3;return 2;
	return -1;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
