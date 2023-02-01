// 2022-11-27T08:30:29.841630
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n>>m;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	sort(ve.begin(),ve.end());
	ll ans=0;
	vector<pair<ll,ll>>v2;
	v2.emplace_back(ve[0],1);
	F(i,1,n)if(v2[v2.size()-1].first==ve[i])v2[v2.size()-1].second++;
	else v2.emplace_back(ve[i],1);
	int l=0,r=v2.size()-1;
	ll w=0,mi;
	while(l<=r){
//		cout<<l<<" "<<r<<" "<<v2[l].first<<" "<<v2[l].second<<","<<v2[r].first<<" "<<v2[r].second<<" w="<<w<<endl;
		if(v2[l].second<=0){l++;continue;}
		if(v2[r].second<=0){r--;continue;}
		if(v2[l].first+v2[r].first<=m){
			mi=min(v2[l].second,v2[r].second);
			v2[l].second-=mi;
			v2[r].second-=mi;
			ans=1;
		}else{
			w+=v2[r].second;
			r--;
		}
	}
	f(i,n)ans+=ve[i];
	ans+=w;
	return ans;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
