// 2022-12-17T16:33:30.730871
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	string s;cin>>s;
	int l0=-1,l1=-1;
	ll ans=1;
	if(s[0]=='0')l0=0;else l1=0;
	for(int i=0;i<n-1;i++){
		ans=1;
		if(s[i]=='0'){if(l1>-1)ans+=l1+1;l0=i;}
		if(s[i]=='1'){if(l0>-1)ans+=l0+1;l1=i;}
		cout<<ans<<" ";
	}
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
