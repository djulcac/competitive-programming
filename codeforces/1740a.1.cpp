#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 100005

ll criba[N];
void build(){
	f(i,N)criba[i]=1;
	criba[0]=criba[1]=0;
	for(int i=2;i*i<N;i++)
		if(criba[i])
			for(int j=2*i;j<N;j+=i)
				criba[j]=0;
	// f(i,20)cout<<criba[i]<<" ";cout<<endl;
}
ll solve(){
	ll n,m,k;
	cin>>n;
	return n;
}

int main(){
	ll T = 1;
	cin>>T;
	build();
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1