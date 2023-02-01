#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn,x;
	cin>>n;
	string s;
	vector<bool>ve(1000006,0);
	ll ans=0,con=0;
	f(i,n){
		cin>>s>>x;
		if(s=="+"){
			ve[x]=1;
			con++;
			ans=max(ans,con);
		}else if(s=="-"&&ve[x]){
			con--;
			ve[x]=0;
		}else if(s=="-"&&!ve[x]){
			ans++;
		}
	}
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
