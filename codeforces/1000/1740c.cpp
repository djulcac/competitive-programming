#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m,k,a,b,h,w,t;
	cin>>n;
	vector<ll>ve;
	f(i,n){
		cin>>t;
		ve.push_back(t);
	}
	sort(ve.begin(),ve.end());
	// f(i,n)cout<<ve[i]<<" ";cout<<endl;
	ll ans,ans1,ans2,ans3;
	// ans=ans1=ans2=1000000009;
	ans=ans1=ans2=0;
	// F(i,1,n-1){
	// 	// ans1=min(ans1,2*ve[n-1]-ve[0]-ve[i]);
	// 	// ans2=min(ans2,ve[n-1]-2*ve[0]+ve[i]);
	// 	// ans3=min(ans3,2*ve[n-1]-ve[0]-ve[i]);
	// }
	F(i,1,n)ans=max(ans,-ve[i-1]+2*ve[i]-ve[0]);
	f(i,n-1)ans=max(ans,ve[n-1]+ve[i+1]-2*ve[i]);
	return ans;
	// F(i,1,n-1)ans2=min(ans2,ve[n-1]-2*ve[0]+ve[i]);
	// return max(max(ans1,ans2),ve[n-1]-ve[0]);
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1