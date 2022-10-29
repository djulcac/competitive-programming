#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,t;
	vector<ll>ve;
	cin>>n;
	f(i,n)cin>>t,ve.push_back(t);
	sort(ve.begin(),ve.end());
	// f(i,n)cout<<ve[i]<<" ";cout<<endl;
	vector<ll>ans(n);
	ll b=n%2;
	f(i,n/2)ans[2*i+1]=ve[i];
	f(i,n/2)ans[2*i]=ve[n/2+i];
	if(n%2)ans[n-1]=ve[n-1];
	ll s=0;
	f(i,n/2)if(ans[2*i+1]<ans[2*i] && ans[2*i+1]<ans[2*i+2])s++;
	cout<<s<<endl;
	f(i,n)cout<<ans[i]<<" ";cout<<endl;
	// cout<<"gg"<<n<<" "<<endl;
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3