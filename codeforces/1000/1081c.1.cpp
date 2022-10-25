#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define MOD 998244353
#define N 2003

ll me[N][N];
ll build(){
    ll n,k;
    n=k=N-1;
    f(i,n)me[i][0]=1;
    F(i,1,n)me[i][1]=i;
    F(i,2,k)me[i][i]=1;
    F(i,3,n)
        F(j,2,n+1)
            if(j<=k) me[i][j]=(me[i-1][j-1]+me[i-1][j])%MOD;
    return 0;
}
ll solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    build();
    // f(i,10){
    //     f(j,10)cout<<me[i][j]<<" ";
    //     cout<<endl;
    // }
    if(!k)return m;
    ll ans=m;
    cout<<ans<<endl;
    f(i,k)ans=(ans*(m-1))%MOD;
    cout<<ans<<endl;
    cout<<me[n-1][k]<<endl;
    ans=(ans*me[n-1][k]%MOD);
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