// 2022-11-02T20:38:02.459378
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,nn,m;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	set<ll>se;
	ll t=ve[0];
	// se.insert(ve[0]%100);
	// cout<<"while"<<endl;
	ll ii=0;
	while(ii<100 && se.find(t%100)==se.end()){
		se.insert(t%100);
		// se.insert((t+t%10)%100);
		t+=t%10;
		// cout<<t<<" "<<t%100<<endl;
		ii++;
	}
	// for(auto it:se)cout<<it<<" ";cout<<endl;
	// cout<<"F"<<endl;
	// return "gg";
	F(i,1,n){
		set<ll>st;
		t=ve[i];
		st.insert(ve[0]);
		while(st.find(t%100)==se.end()){
			st.insert(t%100);
			t+=t%10;
		}
		vector<ll>vt;
		for(auto it:se)if(st.find(it)==st.end())vt.push_back(it);
		f(j,vt.size())se.erase(vt[j]);
		if(se.empty())return "NO";
	}
	return "YES";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2