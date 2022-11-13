// 2022-11-10T19:07:42.567129
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

int getPhone(string s){
	// if(s.substr(0,2)==s.substr(3,2) && s.substr(0,2)==s.substr(6,2))
	// 	return 0;
	string ns="";
	f(i,8){
		if(i==2 || i==5)continue;
		ns+=s[i];
	}
	bool b=true;
	F(i,1,6)if(ns[i]!=ns[i-1])b=false;
	if(b)return 0;
	F(i,1,6)if(ns[i]>=ns[i-1])return 2;
	return 1;
}
ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	ll ma[n][3];
	string na[n];
	f(i,n)ma[i][0]=ma[i][1]=ma[i][2]=0;
	f(i,n){
		string s;
		cin>>m>>na[i];
		f(j,m){
			cin>>s;
			int ii=getPhone(s);
			ma[i][ii]++;
		}
	}
	int ans=0;
	f(i,n)if(ma[i][0]>ma[ans][0])ans=i;
	cout<<"If you want to call a taxi, you should call: "<<na[ans];
	f(i,n)if(i!=ans && ma[i][0]==ma[ans][0])cout<<", "<<na[i];
	cout<<"."<<endl;
	ans=0;
	f(i,n)if(ma[i][1]>ma[ans][1])ans=i;
	cout<<"If you want to order a pizza, you should call: "<<na[ans];
	f(i,n)if(i!=ans && ma[i][1]==ma[ans][1])cout<<", "<<na[i];
	cout<<"."<<endl;
	ans=0;
	f(i,n)if(ma[i][2]>ma[ans][2])ans=i;
	cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<na[ans];
	f(i,n)if(i!=ans && ma[i][2]==ma[ans][2])cout<<", "<<na[i];
	cout<<"."<<endl;
	// f(i,n){
	// 	f(j,3)cout<<ma[i][j]<<" ";
	// 	cout<<endl;
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
//3.2