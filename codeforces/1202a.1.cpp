// 2022-11-05T16:10:56.426388
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

int isGreat(string a,string b){
	// if(a.size()>b.size()) return 1;
	// if(a.size()<b.size()) return -1;
	int i=0,n=min(a.size()-1,b.size());
	while(i<=n){
		if(a[i]==b[i])i++;
		else break;
	}
	if(i>n){
		if(a.size()>b.size())return 1;
		if(a.size()<b.size())return -1;
		if(a.size()==b.size())return 0;
	}
	if(a[i]>b[i]) return 1;
	return -1;
}
string toRever(string x){
	string ans="";
	f(i,x.size())ans+=x[x.size()-i-1];
	// cout<<"rever"<<x<<" "<<ans<<endl;
	return ans;
}
string toBinary(ll x){
	string ans = "";
	int i=0;
	while((1<<i)<=x){
		if((1<<i)&x)ans+="1";
		else ans+="0";
		i++;
	}
	// cout<<"bi"<<x<<" "<<ans<<endl;
	return ans;
}
ll toInt(string x){
	ll ans=0;
	f(i,x.size())if(x[x.size()-1-i]=='1')ans+=(1<<i);
	// cout<<"int"<<x<<" "<<ans<<endl;
	return ans;
}

ll solve(){
	ll n,k,m,t,nn;
	string x0,y0;
	cin>>x0>>y0;
	ll x=toInt(x0),y=toInt(y0);
	string ans="";
	ans=toRever(toBinary(x+y));
	string ts;
	nn=ans.size();
	k=0;
	cout<<ans<<" "<<x<<" "<<y<<" "<<x+y<<" "<<toBinary(x+y)<<endl;
	for(ll i=0;i<nn+1;i++){
		ts=toRever(toBinary(x+y*(1<<i)));
		cout<<ts<<" "<<ans<<endl;
		if(isGreat(ans,ts)==1){
			ans=ts;
			k=i;
		}
	}
	// cout<<"bb"<<(1<<0)<<" "<<(1<<1)<<endl;
	// cout<<x<<" "<<y<<" "<<isGreat(x,y)<<"toInt "<<toInt(x)<<" "<<toInt(y)<<endl;

	return k;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2