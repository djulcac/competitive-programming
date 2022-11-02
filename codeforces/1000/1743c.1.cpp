// 2022-10-31T12:59:50.230342
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m,k;
	cin>>n;
	string s;cin>>s;
	ll ar[n];f(i,n)cin>>ar[i];
	vector<ll>ve,vema,vei;
	vei.push_back(0);
	F(i,1,n)if(s[i]=='0' && s[i-1]=='1')
		vei.push_back(i);
	// f(i,vei.size())cout<<vei[i]<<" ";cout<<endl;
	int i=n-1;bool b=false;ll ac=0;
	int inext=vei.size()-1;
	while(i>=0){
		// cout<<">"<<s[i]<<" "<<i<<" "<<inext<<" "<<ac<<" "<<ve.size();cout<<endl;
		ve.push_back(-ar[i]);
		if(s[i]=='1'){
			ac++;
		}
		if(i==vei[inext]){
			// cout<<"i==inext"<<endl;
			sort(ve.begin(),ve.end());
			for(int i=0;i<ve.size() && i<ac;i++)vema.push_back(ve[i]);
			ve.clear();
			inext--;
		}
		// if(b)ve.push_back(-ar[i]);
		i--;
	}
	// cout<<endl;
	// cout<<"sort "<<vema.size()<<endl;
	// f(i,vema.size())cout<<vema[i]<<" ";cout<<endl;
	sort(vema.begin(),vema.end());
	ll ans=0;
	f(i,ac)ans-=vema[i];
	// cout<<"-----"<<endl;
	// f(i,n)cout<<ar[i]<<" ";cout<<endl;
	// cout<<s<<endl;
	// f(i,vema.size())cout<<vema[i]<<" ";cout<<endl;
	// cout<<n<<" "<<b<<" "<<ac<<endl;
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1