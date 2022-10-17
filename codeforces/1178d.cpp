#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vl;
typedef vector<ii> vll;

#define N6 1000006
#define N5 100005
#define N3 1003
#define NN N3*3
ll criba[NN];
vector<ll>primes;
void build(){
    for(ll i=0;i<NN;i++)criba[i]=1;
    criba[0]=criba[1]=0;
    for(ll i=2;i<NN;i++){
        if(criba[i]){
            primes.push_back(i);
            for(ll ip=2*i;ip<NN;ip+=i)criba[ip]=0;
        }
    }
}

ll solve(){
    ll n,next;
	cin>>n;
    build();
    next=n;
    while(!criba[next])next++;
    cout<<next<<endl;
    cout<<1<<" "<<n<<endl;
    for(ll i=1;i<n;i++)cout<<i<<" "<<i+1<<endl;
    for(ll i=0;i<next-n;i++)cout<<i+1<<" "<<i+n/2+1<<endl;
    // if(!criba[n]){
    //     ll next = n;
    //     while(!criba[next])next++;
    //     ll m = next-n;
    //     for(ll i=0;i<m;i++)cout<<i+1<<" "<<i+n/2+1<<endl;
    // }
	return 0;
}

int main(){
    ll T = 1;
	// cin>>T;
	while(T--) solve();
    // while(T--) cout<<solve()<<endl;
	return 0;
}
