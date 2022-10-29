#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll x,y;
	cin>>x>>y;
	if(x==0 && y==0)return 0;
	ll ip=0,jp=0;
	ll i=1,j=0,ans=0;
	ll l=1;
	ll t=0;
	while(1){
		// cout<<ip<<" "<<jp<<" , "<<i<<" "<<j<<" | "<<x<<" "<<y<<" ans,l "<<ans<<","<<l<<endl;
		if(min(ip,i)<=x && x<=max(ip,i) && min(jp,j)<=y && y<=max(jp,j)) return ans;
		if(abs(i)==abs(j))l++;
		ip=i;
		jp=j;
		if(ans%4==0)j+=l;
		if(ans%4==1)i-=l;
		if(ans%4==2)j-=l;
		if(ans%4==3)i+=1;
		ans++;
		if(t>5)break;
		t++;
	}
	return ans;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3