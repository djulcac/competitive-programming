// 2022-12-17T14:43:35.652480
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	string s;
	cin>>s;
	bool b=0;
	if(s[0]=='1')b=1;
	F(i,1,n)if(s[i]=='0')cout<<'+';
	else if(b) {cout<<'-';b=0;}
	else {cout<<'+';b=1;}
	cout<<endl;
	return 0;
}

int main(){
	ll T = 1;
	cin>>T;
	while(T--) solve();
	//while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
