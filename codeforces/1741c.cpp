// 2022-11-02T22:33:54.802934
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
	ll ma=0;
	f(i,n)ma=max(ma,ve[i]);
	vector<ll>di2,di;
	ll su=0;f(i,n)su+=ve[i];
	set<ll>se;
	ll t=0;
	f(i,n){
		t+=ve[i];
		if(su%t==0)se.insert(t);
	}
	for(auto it:se)di.push_back(it);
	int ans=n;
	bool b=true;
	f(d,di.size()){
		int sut=0,wi=-1;
		b=true;
		for(int i=0;i<n;){
			sut=0;
			int j=i;
			while(j<n && sut<di[d])sut+=ve[j],j++;
			if(sut!=di[d]){b=false;break;}
			wi=max(wi,j-i);
			i=j;
		}
		if(!b)continue;
		if(wi!=-1){
			ans=min(ans,wi);
			// break;
		}
	}
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2