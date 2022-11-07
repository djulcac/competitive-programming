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
    string a,b;
    cin>>n>>a>>b;
    ll a0,a1,b0,b1;
    a0=a1=b0=b1;
    ll cha,igu;
    cha=igu=0;
    f(i,n){
        if(a[i]=='0')a0++;else a1++;
        if(b[i]=='0')b0++;else b1++;
        if(a[i]==b[i])igu++;
        else cha++;
    }
    if(a0==n && b0==n){
        cout<<"YES"<<endl<<0<<endl;
    }else if(a1==n && b1==n){
        cout<<"YES\n2"<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
    }else if(a1==n && b0==n){
        cout<<"YES\n1"<<endl;
        cout<<1<<" "<<n<<endl;
    }else if(a0==n && b1==n){
        cout<<"YES\n3"<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
    }else if(cha && !igu){
        cout<<"YES"<<endl;
        ll c1=0;
        f(i,n){
            if(a[i]=='1'){
                // cout<<i+1<<" "<<i+1<<endl;
                c1++;
            }
        }
        ll c1a=0;if(c1%2==0)c1a=3;
        cout<<c1+c1a<<endl;
        f(i,n){
            if(a[i]=='1'){
                cout<<i+1<<" "<<i+1<<endl;
                // c1++;
            }
        }
        if(c1%2==0){
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<n<<endl;   
        }
    }else if(!cha && igu){
        cout<<"YES"<<endl;
        ll c0=0;
        f(i,n){
            if(a[i]=='0'){
                // cout<<i+1<<" "<<i+1<<endl;
                c0++;
            }
        }
        ll c0a=0;
        if(c0%2==0)c0a=2;else c0a=1;
        cout<<c0+c0a<<endl;
        f(i,n){
            if(a[i]=='0'){
                cout<<i+1<<" "<<i+1<<endl;
                // c0++;
            }
        }
        if(c0%2==0){
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<n<<endl;    
        }else{
            cout<<1<<" "<<n<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

int main(){
	ll T = 1;
	cin>>T;
	while(T--) solve();
// 	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2