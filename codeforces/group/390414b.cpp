#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
    string pw,s;
    ll n;
    cin>>pw;
    cin>>n;
    bool s0,s1;
    s0=s1=false;
    f(i,n){
        cin>>s;
        if(s==pw) return "YES";
        if(s[0]==pw[1])s1=true;
        if(s[1]==pw[0])s0=true;
    }
    if(s0 && s1) return "YES";
	return "NO";
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3