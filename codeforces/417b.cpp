// 2022-11-10T13:54:34.625457
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 100005
string solve(){
	ll n,k,m,t,nn;
	cin>>n;
	vector<pair<ll,ll>>ve(n);
	f(i,n)cin>>ve[i].first>>ve[i].second;
	// f(i,n)cout<<ve[i].first<<" "<<ve[i].second<<endl;
	set<ll>st[N];
	f(i,n){
		if(ve[i].first==0){
			st[ve[i].second].insert(0);
			continue;
		}
		if(st[ve[i].second].find(ve[i].first-1)==st[ve[i].second].end())
			return "NO";
		st[ve[i].second].insert(ve[i].first);
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