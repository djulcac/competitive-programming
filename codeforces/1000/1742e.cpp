// 2022-10-31T17:58:20.732231
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m,k,q;
	cin>>n>>q;
	ll ar[n];f(i,n)cin>>ar[i];
	ll aq[q];f(i,q)cin>>aq[i];
	vector<ll>pr,ans;
	pr.push_back(0);
	f(i,n)pr.push_back(max(ar[i],pr[i]));
	int iq=0;
	f(i,q){
		iq = upper_bound(pr.begin(),pr.end(),aq[i])-pr.begin()-1;
		ans.push_back(iq-1);
	}
	ll su[n];su[0]=ar[0];
	F(i,1,n)su[i]=su[i-1]+ar[i];
	// f(i,n)cout<<su[i]<<" ";cout<<endl;
	ll t;
	f(i,ans.size()){
		if(ans[i]==-1)t=0;
		else t=su[ans[i]];
		cout<<t<<" ";
	}
	cout<<endl;
	// f(i,ans.size())cout<<ans[i]<<","<<su[ans[i]]<<" ";cout<<endl;
	return 0;
}

int main(){
	ll T = 1;
	cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1