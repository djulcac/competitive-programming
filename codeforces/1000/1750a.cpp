#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
    ll t,n,me,im;
    bool b=true;
    cin>>n>>me;
    im=0;
    F(i,1,n){
        cin>>t;
        // cout<<me<<" "<<t<<endl;
        if(t<me) b=false;
    }
    if(!b) return "No";
    return "Yes";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2