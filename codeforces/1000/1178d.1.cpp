#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vl;
typedef vector<ii> vll;

#define N6 1000006
#define N5 100005
#define N3 1003
#define NN N3
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

void print_value(ll l,ll r){
    if(r-l==3){
        cout<<l<<l+1<<endl;
        cout<<l+1<<l+2<<endl;
        cout<<l+2<<l<<endl;
    }else if(r-l==4){
        cout<<l<<l+1<<endl;
        cout<<l+1<<l+2<<endl;
        cout<<l+2<<l+3<<endl;
        cout<<l<<l+3<<endl;
        cout<<l<<l+2<<endl;
    }else if(r-l==5){
        cout<<l<<l+1<<endl;
        cout<<l+1<<l+2<<endl;
        cout<<l+2<<l+3<<endl;
        cout<<l+3<<l+4<<endl;
        cout<<l<<l+4<<endl;
    }else{
        print_value(l,l+3);
        print_value(l+4,r);
    }
}
ll solve(){
    ll n;
	cin>>n;
    build();
    cout<<primes.size()<<endl;
    ll t;
    for(int i=0;i<20;i++)cout<<primes[i]<<" ";
    cout<<endl;
    while(n>0){
        t = lower_bound(primes.begin(),primes.end(),n)-primes.begin();
        cout<<n<<":"<<t<<" "<<primes[t]<<endl;
        if(n!=primes[t]) t--;
        cout<<primes[t]<<" ";
        n-=primes[t];
    }
    cout<<endl;
	return 0;
}

int main(){
    ll T = 1;
	// cin>>T;
	// while(T--) solve();
    while(T--) cout<<solve()<<endl;
	return 0;
}