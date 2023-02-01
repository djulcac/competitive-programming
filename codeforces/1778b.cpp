// 2023-02-01T15:38:32.963572
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

int solve(){
	int n,k,m,t,nn,d;
	cin>>n>>m>>d;
	vector<int>vp(n),va(m),vm(n),vai(m);
	for(int i=0;i<n;i++){
		cin>>vp[i];
		vp[i]--;
		vm[vp[i]]=i;
	}
	for(int i=0;i<m;i++){
		cin>>va[i];
		va[i]--;
		vai[i]=vm[va[i]];
	}
	int d1=n,d2=n;
	for(int i=1;i<m;i++){
		d1=min(d1,vai[i]-vai[i-1]);
		if(d<n-1)
			d2=min(d2,vai[i-1]+d+1-vai[i]);
	}
	int ans = min(d1,d2);
	return max(0,ans);
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
