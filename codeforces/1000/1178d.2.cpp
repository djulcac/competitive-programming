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
void print_value(ll l,ll r){
    if(r-l==3){
        cout<<l<<" "<<l+1<<endl;
        cout<<l+1<<" "<<l+2<<endl;
        cout<<l+2<<" "<<l<<endl;
    }else if(r-l==4){
        cout<<l<<" "<<l+1<<endl;
        cout<<l+1<<" "<<l+2<<endl;
        cout<<l+2<<" "<<l+3<<endl;
        cout<<l<<" "<<l+3<<endl;
        cout<<l<<" "<<l+2<<endl;
    }else if(r-l==5){
        cout<<l<<" "<<l+1<<endl;
        cout<<l+1<<" "<<l+2<<endl;
        cout<<l+2<<" "<<l+3<<endl;
        cout<<l+3<<" "<<l+4<<endl;
        cout<<l<<" "<<l+4<<endl;
    }else{
        print_value(l,l+3);
        print_value(l+3,r);
    }
}
ll solve(){
    ll n;
	cin>>n;
    ll ans=n/3;
    print_value(1,n+1);
	return 0;
}

int main(){
    ll T = 1;
	// cin>>T;
	while(T--) solve();
    // while(T--) cout<<solve()<<endl;
	return 0;
}