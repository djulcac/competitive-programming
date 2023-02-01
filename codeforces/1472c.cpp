#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	int n,k,m,t,nn;
	cin>>n;
	vector<int>ve(n);
	for(int &x:ve)cin>>x;
	int ima,sma,ste,ite;
	ima=sma=0;
	vector<int>dp(n);
	F(i,n-1,-1){
		dp[i]=ve[i];
		ite=i+1+ve[i];
		if(ite<=n){
			dp[i]+=dp[ite-1];
		}
	}
	f(i,n)sma=max(sma,dp[i]);
	return sma;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
