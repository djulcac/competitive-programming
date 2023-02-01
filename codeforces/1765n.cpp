// 2022-11-27T06:30:15.750366
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,t,nn;
	string s;
	cin>>s>>k;
	n=s.size();
	vector<int>ve(n);
	f(i,n)ve[i]=s[i]-'0';
	int zi=-1;
	f(i,s.size())if(s[i]=='0'){zi=i;break;}
	vector<bool>vb(n,1);
	int istart=0;
//	f(i,n)cout<<vb[i];cout<<endl;
//	f(i,n)cout<<ve[i];cout<<endl;
	if(zi!=-1&&zi<=k){
		int imi=0;
		for(int i=0;i<zi;i++)
			if(ve[i]<ve[imi])imi=i;
		if(imi!=0){
			f(i,imi)vb[i]=0;
			k-=imi;
		}
		istart=imi+1;
	}
//	cout<<"zero"<<zi<<" "<<istart<<endl;
	for(int i=istart;i<n&&k;){
		int imi=i;
		for(int j=i+1;j<i+1+k&&j<n;j++)
			if(ve[j]<ve[imi])imi=j;
		if(imi!=i){
			for(int j=i;j<imi;j++)vb[j]=0,k--;
			i=imi+1;
		}else i++;
	}
	for(int i=n-1;i>=0&&k;i--)if(vb[i])vb[i]=0,k--;
	f(i,n)if(vb[i])cout<<ve[i];cout<<endl;
	return 0;
}

int main(){
	ll T = 1;
	cin>>T;
	while(T--) solve();
	//while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
