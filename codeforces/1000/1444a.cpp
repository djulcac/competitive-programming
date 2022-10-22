#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
 
ll solve(){
	ll p,q;
	cin>>p>>q;
	vector<ll>d;
	ll x=q;
	for(int i=2;i*i<=x;i++)
		if(x%i==0){
			d.push_back(i);
			while(x%i==0)x/=i;
		}
	if(x>1){
		d.push_back(x);
		x=1;
	}
	ll t;
	for(int i=0;i<d.size();i++){
		t=p;
		while(t%q==0)t/=d[i];
		x=max(x,t);
	}
	return x;
}
 
int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3