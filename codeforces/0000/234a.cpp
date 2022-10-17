#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n;
	cin>>n;
	string s;
	cin>>s;
	cout<<1<<" "<<n<<endl;
	cout<<2<<" "<<s<<endl;
	// f(i,n/2){
	// 	if(s[i]=='L')cout<<(i+1)<<" "<<(n/2+i+1)<<endl;
	// 	else cout<<n/2+i+1<<" "<<i+1<<endl;
	// }
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3