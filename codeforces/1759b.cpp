// 2022-11-18T14:53:41.376180
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll vsu,n,k,m,s,t,nn;
	cin>>m>>s;
	vector<int>ve(m);
	for(int &x:ve)cin>>x;
	vsu=0;
	f(i,m)vsu+=ve[i];
	ll sre=0;
	int rma=0;
	for(int i=1;sre<s;i++){
		rma=max(rma,i);
		if(find(ve.begin(),ve.end(),i)!=ve.end())
			continue;
		sre+=i;
	}
	f(i,m)rma=max(rma,ve[i]);
//	f(i,m)cout<<ve[i]<<" ";cout<<endl;
//	cout<<vsu<<" "<<sre<<" "<<s<<" "<<rma<<endl;
	if(sre==s && vsu+sre==rma*(rma+1)/2)return "YES";
	return "NO";
}

int main(){
	ll T = 1;
	cin>>T;
//	while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
