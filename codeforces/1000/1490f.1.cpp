#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,t;cin>>n;
	vector<ll>ve;
	f(i,n)cin>>t,ve.push_back(t);
	sort(ve.begin(),ve.end());
	ll ma=0;
	vector<ll>fr;
	t=1;
	F(i,1,n)if(ve[i]==ve[i-1])t++;else ma=max(ma,t),fr.push_back(t),t=1;
	ma=max(ma,t);
	fr.push_back(t);
	ll ac[ma+1];
	f(i,ma+1)ac[i]=0;
	f(i,fr.size())ac[fr[i]]++;
	ll mi=n,co=0;
	F(i,1,ma+1){
		co=0;
		f(j,i)co+=j*ac[j];
		F(j,i+1,ma+1)co+=(j-i)*ac[j];
		mi=min(mi,co);
	}
	// f(i,ve.size())cout<<ve[i]<<"-";cout<<endl;
	// f(i,fr.size())cout<<fr[i]<<"-";cout<<endl;
	// f(i,ma+1)cout<<ac[i]<<",";cout<<endl;
	return mi;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3