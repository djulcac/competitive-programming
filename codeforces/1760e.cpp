#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll value(vector<int>&ve){
	ll ans=0,t=0;
	for(int i=ve.size()-1;i>=0;i--){
		if(!ve[i])t++;
		else ans+=t;
	}
	return ans;
}
ll solve(){
	int n,k,m,t,nn;
	cin>>n;
	vector<int>ve(n);
	for(int &x:ve)cin>>x;
	ll ans=value(ve);
	f(i,n)if(!ve[i]){
		ve[i]=1;
		ans=max(ans,value(ve));
		ve[i]=0;
		break;
	}
	nn=n-1;
	F(i,nn,-1)if(ve[i]){
		ve[i]=0;
		ans=max(ans,value(ve));
		break;
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
