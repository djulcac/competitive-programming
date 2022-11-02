// 2022-11-01T02:11:30.867528
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,m,k,t;
	cin>>n;
	// ll ar[n];f(i,n)cin>>ar[i];
	vector<ll>ve;f(i,n)cin>>t,ve.push_back(t);
	sort(ve.begin(),ve.end());
	ll ans=0,anst=0;
	int ir;
	vector<ll>vc;
	f(k,n+1){
		// cout<<">k"<<k<<endl;
		vc.clear();
		f(i,n)vc.push_back(ve[i]);
		anst=0;
		f(i,n){
			ir=-1;
			f(j,vc.size())if(vc[j]<=k-i)ir=j;
			if(ir==-1)break;
			anst++;
			// cout<<"gg"<<ir<<" "<<vc.size()<<endl;
			vc.erase(vc.begin()+ir);
			if(vc.size())vc.erase(vc.begin());
		}
		if(anst>=k)ans=max(ans,anst);
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
//3.1