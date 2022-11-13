// 2022-11-05T03:44:44.894569
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	float n,k,t,su;
	cin>>n>>k>>t;
	vector<ll>ve(n);f(i,n)ve[i]=0;
	int i=0;su=0;
	while(i<n && (su+k)/(n*k)<=t/100.0){su+=k;ve[i]=k;i++;}
	int ii=0;
	while(i<n && ii<k && (su+ii+1)/(n*k)<=t/100)ii++;
	if(i<n){
		ve[i]=ii;
	}
	// cout<<">>"<<n<<" "<<k<<" "<<t<<endl;
	// cout<<">>"<<i<<" "<<ii<<" "<<su<<endl;
	f(i,n)cout<<ve[i]<<" ";cout<<endl;
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2