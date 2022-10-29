#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	string ans[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	ll n,i=0;
	cin>>n;
	while(5*((1<<i)-1)<n)i++;
	// if(n<=5)return ans[i];
	ll l=(1<<(i-1))-1;
	ll w=1<<(i-1);
	ll ia,j=n-5*l;
	// cout<<ia<<" "<<i<<" "<<j<<" "<<l<<endl;
	ia=j/w;
	if(j%w)ia++;
	// cout<<ia<<" "<<i<<" "<<j<<endl;
	return ans[ia-1];
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3