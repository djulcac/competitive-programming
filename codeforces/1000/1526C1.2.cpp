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
	if(k<1) return 0;
	if(i==0){
		if(k==1){
			me[i][k]=ar[i];
			return ar[i];
		}
		me[i][k]=0;
		return 0;
	}
	if(fl[i][k]) return me[i][k];
	if(dp(i-1,k-1)+ar[i]>0)
		me[i][k]=max(dp(i-1,k-1)+ar[i],dp(i-1,k));
	else
		me[i][k]=dp(i-1,k);
	fl[i][k]=true;
	return me[i][k];
}

ll solve(){
	cin>>n;
	f(i,n)cin>>ar[i];
	f(i,n){
		f(k,n+1)cout<<me[i][k]<<" ";
		cout<<endl;
	}
	cout<<fl<<endl;
	cout<<me<<endl;
	dp(n-1,n);
	f(i,n){
		f(k,n+1)cout<<me[i][k]<<" ";
		cout<<endl;
	}
	ll ima=0,kma=0;
	f(i,n)f(k,n+1)if(me[i][k]>0 && k>kma)ima=i,kma=k;
	return kma;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3