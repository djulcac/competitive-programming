#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vl;
typedef vector<ii> vll;

#define N6 1000006
#define N5 100005
#define N N6

ll solve(){
    ll n, x;
	cin>>n>>x;
    ll f[4*N5],t;
    for(int i=0;i<N5;i++)f[i]=0;
    for(int i=0;i<n;i++){
        cin>>t;
        f[t]++;
    }
    ll ans=0;
    if(!x){
        for(int i=0;i<N5;i++){
            if(f[i]>1)ans+=(f[i]*(f[i]-1))/2;
        }
    }else{
        for(int i=0;i<N5;i++){
            if(f[i] && f[i^x]){
                ans += f[i]*f[i^x];
                // cout<<i<<" "<<f[i]<<" "<<f[i^x]<<" "<<(i^x)<<endl;
            }
        }
        ans /= 2;
    }
	return ans;
}

int main(){
    ll T = 1;
	// cin>>T;
	while(T--) cout<<solve()<<endl;
	return 0;
}