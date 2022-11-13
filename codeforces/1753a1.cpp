// 2022-11-08T16:32:32.222537
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	if(n%2){cout<<-1<<endl;return -1;}
	vector<pair<ll,ll>>ans;
	for(int i=1;i<n;i+=2){
		if(ve[i]==ve[i-1])ans.emplace_back(i,i+1);
		else ans.emplace_back(i,i),ans.emplace_back(i+1,i+1);
	}
	cout<<ans.size()<<endl;
	f(i,ans.size())cout<<ans[i].first<<" "<<ans[i].second<<endl;
	return 0;
}

int main(){
	ll T = 1;
	cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2