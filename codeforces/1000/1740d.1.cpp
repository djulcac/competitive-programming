#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 100005

string solve(){
	ll n,m,k,a,b,h,w,t;
	ll ar[N];
	cin>>n>>m>>k;
	f(i,n)cin>>ar[i];
	for(int i=(n-1)*(m-1);i<k;i++){
		if(k-ar[i]+1<=i)return "TIDAK";
	}
	return "YA";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1