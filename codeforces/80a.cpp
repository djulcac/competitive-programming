#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

void criba(vector<bool>&ve){
	f(i,ve.size())ve[i]=1;
	ve[0]=ve[1]=0;
	f(i,ve.size())
		if(ve[i])
			for(int j=i*2;j<ve.size();j+=i)
				ve[j]=0;
}

string solve(){
	ll n,k,m,t,nn;
	cin>>n>>m;
	vector<bool>ve(51);
	criba(ve);
	for(int i=n+1;i<=m;i++)
		if(ve[i]){t=i;break;}
	if(t==m)return "YES";
	return "NO";
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
