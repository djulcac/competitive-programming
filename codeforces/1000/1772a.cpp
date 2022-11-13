#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
vector<ll>ve;
ll n;
bool isOk(){
    ll t=ve[0];
    f(i,ve.size()){
        t=__gcd(t,ve[i]);
	   // cout<<i<<", "<<ve[i]<<endl;
        if(t==1)return true;
    }
    return false;
}
ll solve(){
    ll t;
    cin>>n;
    ve.clear();
    f(i,n){cin>>t;ve.push_back(t);}
    if(isOk())return 0;
    t=ve[n-1];
    ve[n-1]=__gcd(ve[n-1],n);
    if(isOk())return 1;
    ve[n-1]=t;
    ve[n-2]=__gcd(ve[n-2],n-1);
    if(isOk())return 2;
    return 3;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2