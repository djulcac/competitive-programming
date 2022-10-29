#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,c;
	cin>>n>>k;
	string s;
	cin>>s;
	c=n/k;
	ll ar[k][30];
	f(i,k)f(j,30)ar[i][j]=0;
	f(i,k)f(j,c)ar[i][s[j*k+i]-'a']++;
	// cout<<'b'-'a'<<endl;
	// cout<<n<<" "<<k<<endl;
	// cout<<s<<endl;
	// f(i,k){
	// 	f(j,30)cout<<ar[i][j]<<" ";
	// 	cout<<endl;
	// }
	ll ans=0,t=0,a=0;
	f(i,k/2){
		t=0;
		f(j,30)t=max(t,ar[i][j]+ar[k-i-1][j]);
		// cout<<t<<"-"<<c<<endl;
		ans+=2*c-t;
	}
	if(k%2){
		t=0;
		f(j,30)t=max(t,ar[k/2][j]);
		ans+=c-t;
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
//3