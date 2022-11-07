// 2022-11-04T14:43:03.246410
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,nn,m;
	cin>>n;
	string s="";
	// f(i,n)s+="BAN";
	// f(i,n/2)cout<<"gg";cout<<endl;
	vector<pair<ll,ll>>ans;
	// f(i,n/2)swap(s[3*i],s[(n-1-i)*3+2]);
	f(i,n/2)ans.push_back(make_pair(3*i+1,(n-1-i)*3+2+1));
	if(n%2){
		int t=n/2;
		// swap(s[3*t],s[3*t+2]);
		ans.push_back(make_pair(3*t+1,3*t+3));
	}
	cout<<ans.size()<<endl;
	f(i,ans.size())cout<<ans[i].first<<" "<<ans[i].second<<endl;
	return "";
}

int main(){
	ll T = 1;
	cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2