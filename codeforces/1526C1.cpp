#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

#define N 2003
bool fl[N][N];
ll ar[N],sufix[N],n,me[N][N];
ll solve(){
	ll su;
	cin>>n;
	vector<ll>ve;
	f(i,n)cin>>ar[i];
	f(i,n){
		ve.push_back(ar[i]);
		sort(ve.begin(),ve.end());
		su = 0;
		for(auto it:ve)su+=it;
		if(su<0) ve.erase(ve.begin());
	}
	return ve.size();
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3