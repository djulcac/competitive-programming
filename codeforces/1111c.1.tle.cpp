#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vl;
typedef vector<ii> vll;

#define N6 1000006
#define N5 100005

ll n, k, A, B, T = 1;
ll dp(ll l,ll r,ll A,ll B, ll *sufix){
    if(r-l<2){
        if(sufix[l]-sufix[l-1])
            return B;
        return A;
    }
    ll ans = A;
    if(sufix[r-1]-sufix[l-1])
        ans = (r-l)*B*(sufix[r-1]-sufix[l-1]);
    ll mid = (r+l)/2;
    ll res = dp(l,mid,A,B,sufix)+dp(mid,r,A,B,sufix);
    if(ans>res) return res;
    return ans;
}
ll solve(){
	cin>>n>>k>>A>>B;
    ll N = 1<<n;
    ll p[N],t;
    for(int i=0;i<N;i++)p[i]=0;
    for(int i=0;i<k;i++){
        cin>>t;
        p[t-1]++;
    }
    ll sufix[N+1];
    for(int i=0;i<N;i++)
        sufix[i+1]=sufix[i]+p[i];
	return dp(1,N+1,A,B,sufix);
}

int main(){
	// T = nxt();
	while(T--)
        cout<<solve()<<endl;
	return 0;
}