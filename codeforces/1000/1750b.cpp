#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll max01(string s,char c){
    ll ans=0,t=0;
    f(i,s.size()){
        if(s[i]==c)t++;
        else{
            ans=max(ans,t);
            t=0;
        }
    }
    return max(ans,t);
}
ll solve(){
    ll t,n,me,im;
    string s;
    cin>>n>>s;
    ll c0=0,c1=0;
    f(i,s.size())if(s[i]=='0')c0++;else c1++;
    ll m=max(max01(s,'0'),max01(s,'1'));
    return max(m*m,c0*c1);
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2