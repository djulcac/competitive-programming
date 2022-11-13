// 2022-11-08T17:27:52.187304
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t1,t2,nn,x;
	cin>>n>>x;
	vector<pair<ll,ll>>vp;
	f(i,n){
		cin>>t1>>t2;
		vp.emplace_back(t1,t2);
	}
	F(i,1,n){
		vector<ll>num;
		num.push_back(vp[i].first);
		num.push_back(7-vp[i].first);
		num.push_back(vp[i].second);
		num.push_back(7-vp[i].second);
		if(find(num.begin(),num.end(),x)!=num.end()) return "NO";
	}
	return "YES";
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2