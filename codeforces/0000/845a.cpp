#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
    ll t,n,me,im;
    cin>>n;
    vector<ll>ve(2*n);
    for(ll &x:ve)cin>>x;
    sort(ve.begin(),ve.end());
    if(ve[n]>ve[n-1]) return "YES";
    return "NO";
}

int main(){
	ll T = 1;
// 	cin>>T;
// 	while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2