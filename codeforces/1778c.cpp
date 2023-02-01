// 2023-02-01T16:11:58.960261
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	vector<ll>sa(10,0),sb(10,0);
	cin>>n>>k;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<n;i++){
		sa[s1[i]-'a']++;
		sb[s2[i]-'a']++;
	}
	ll ca=0,cb=0,one=1;
	for(int i=0;i<10;i++){
		ca+=min(one,sa[i]);
		cb+=min(one,sb[i]);
	}
	if(max(ca,cb)<=k) return n*(n+1)/2;
	ll ans=0;
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
