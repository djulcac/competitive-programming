// 2022-11-04T14:58:23.925518
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,nn,mi,me,t;
	cin>>n;
	cin>>me>>mi;
	vector<ll>ve;
	F(i,2,n){
		cin>>t;
		mi=min(mi,t);
	}
	if(mi>=me)return "BOB";
	return "ALICE";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2