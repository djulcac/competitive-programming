// 2022-11-18T01:25:39.111807
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	n*=2;
	vector<int>ve(n);
	for(int &x:ve)cin>>x;
	bool ok=1;
	F(i,1,n)ok&=ve[i]==ve[i-1];
	if(ok){cout<<-1<<endl;return 0;}
	sort(ve.begin(),ve.end());
	f(i,n)cout<<ve[i]<<" ";
	cout<<endl;
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	//while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
