#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

#define N 2003
bool fl[N][N];
ll ar[N],sufix[N],n,me[N][N];
ll dp(ll i,ll k){
	if(fl[i][k]) return me[i][k];
	if(i==0){
		if(va+ar[i]>=0)
			return 1;
		return 0;
	}
	ll r1 = 0;
	if(va+ar[i]>=0) r1 = 1+dp(i+1,va+ar[i]);
	ll r2 = dp(i+1,va);
	return max(r1,r2);
}

ll solve(){
	cin>>n;
	f(i,n)cin>>ar[i];
	sufix[0]=0;
	f(i,n){
		sufix[i+1]=sufix[i]+ar[i];
	ll ans=0;
	F(i,n-1,-1){
		if(ar[i]>=0 || sufix[])ans++;
	}
	return dp(0,0);
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3