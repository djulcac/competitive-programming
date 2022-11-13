// 2022-11-07T23:25:09.893994
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	ll su1[n+1],su0[n+1];
	su1[0]=su0[0]=0;
	bool c=false;
	f(i,n)
		if(s1[i]=='1')su1[i+1]=su1[i]+1,su0[i+1]=su0[i];
		else su1[i+1]=su1[i],su0[i+1]=su0[i]+1;
	F(i,n,0)
		if(!c){
			if(s1[i-1]!=s2[i-1])
				if(su1[i]!=su0[i]) return "NO";
				else c=true;
		}else {
			if(s1[i-1]==s2[i-1])
				if(su1[i]!=su0[i]) return "NO";
				else c=false;
		}
	return "YES";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2