#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	float rad,d,n,k,m,t,nn,c;
	cin>>rad>>d;
	cin>>n;
	float x,y,r,l;
	//f(i,n)cin>>x[i]>>y[i]>>r[i];
	int ans=0;
	c=sqrt((rad-d)*(rad-d));
//	cout<<"l r*r c*c rad*rad"<<endl;
	f(i,n){
		cin>>x>>y>>r;
		l=sqrt(x*x+y*y);
		if(l-r>=c&&l+r<=rad)ans++;
//		cout<<l<<" "<<r<<" "<<c<<" "<<rad<<" "<<ans<<endl;
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
//3.2
