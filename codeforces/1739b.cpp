// 2022-11-02T23:04:23.013280
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,nn,m;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	// f(i,n)cout<<ve[i]<<" ";cout<<endl;
	bool b=true;
	vector<ll>ans;
	ans.push_back(ve[0]);
	F(i,1,n){
		if(ve[i] && ve[i]<=ans[i-1]){
			b=false;
			break;
		}
		ans.push_back(ans[i-1]+ve[i]);
	}
	// f(i,ans.size())cout<<ans[i]<<",";cout<<endl;
	if(!b)cout<<-1<<endl;
	else{
		f(i,ans.size())cout<<ans[i]<<" ";cout<<endl;
	}
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