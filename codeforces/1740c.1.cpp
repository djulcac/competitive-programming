#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m,k,a,b,h,w,t;
	cin>>n;
	vector<ll>ve;
	f(i,n){
		cin>>t;
		ve.push_back(t);
	}
	sort(ve.begin(),ve.end());
	// f(i,n)cout<<ve[i]<<" ";cout<<endl;
	return 2*ve[n-1]-ve[0]-ve[n-2];
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1