// 2023-02-01T14:43:07.158612
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	int su = 0, p=0;
	vector<int>va(n);
	for(int &x:va){cin>>x;su+=x;}
	// for(int i=1;i<n;i++){
	// 	if(va[i]==-1 && va[i-1]==-1)p=2;
	// }
	// return su+2*p;
	int a,b,ans;
	ans=su-2*(va[0]+va[1]);
	for(int i=1;i<n;i++){
		a=va[i]+va[i-1];
		b=-va[i]-va[i-1];
		ans=max(ans,su+2*b);
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
