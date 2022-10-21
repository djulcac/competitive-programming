#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,ai,ig,di,ch,old;
	ig=di=ch=0;old=-1;
	cin>>n;
	ll ar[n];
	f(i,n)cin>>ar[i];
	ll i0,i1;
	i0=0;
	i1=n;
	f(i,n)if(i+1==ar[i])i0++;else break;
	F(i,n-1,-1)if(i+1==ar[i])i1--;else break;
	if(i0==n || i1==0)return 0;
	n=i1-i0;
	F(i,i0,i1){
		ai=ar[i];
		if(ai==i+1){
			ig++;
			if(old==1)ch++;
			old=0;
		}else{
			di++;
			if(old==0)ch++;
			old=1;
		}
	}
	if(ig==n)return 0;
	if(di==n || ch==1)return 1;
	return 2;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3