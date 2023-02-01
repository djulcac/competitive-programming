// 2022-11-27T06:08:56.631025
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	ll p=-1;
	F(i,2,1000006)if(n%i==0){p=i;break;}
	if(p==-1)cout<<"1 "<<n-1<<endl;
	else cout<<n/p<<" "<<(n/p)*(p-1)<<endl;
	return 0;
}

int main(){
	ll T = 1;
	 cin>>T;
	while(T--) solve();
	//while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
