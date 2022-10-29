#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vl;
typedef vector<ii> vll;

#define N6 1000006
#define N5 100005

ll n, k, A, B, T = 1;
vector<ll>p;
ll dp(ll l,ll r,ll A,ll B){
    ll i = lower_bound(p.begin(),p.end(),l)-p.begin();
    ll j = upper_bound(p.begin(),p.end(),r)-p.begin();
    j--;
    ll w = j-i+1;
    ll ans = A;
    if(w)
        ans = (r-l+1)*B*w;
    if(l==r || w==0) return ans;
    ll mid = (r+l)/2;
    ll res = dp(l,mid,A,B)+dp(mid+1,r,A,B);
    if(ans>res) return res;
    return ans;
}
ll solve(){
	cin>>n>>k>>A>>B;
    ll N = 1<<n;
    ll t;
    // for(int i=0;i<k;i++)p[i]=0;
    for(int i=0;i<k;i++){
        cin>>t;
        p.push_back(t);
    }
    // ll sufix[N+1];
    // for(int i=0;i<N;i++)
    //     sufix[i+1]=sufix[i]+p[i];
    // for(int i=0;i<k;i++)cout<<p[i]<<" ";cout<<endl;
    sort(p.begin(),p.end());
    // for(int i=0;i<k;i++)cout<<p[i]<<" ";cout<<endl;
    // return 1;
	return dp(1,N,A,B);
}

int main(){
	// T = nxt();
	while(T--)
        cout<<solve()<<endl;
	return 0;
}