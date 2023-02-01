#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	int n,k,m,t,nn;
	cin>>n;
	vector<int>ve(n);
	for(int &x:ve)cin>>x;
	int ima,sma,ste,ite;
	ima=sma=0;
	f(i,n){
		ite=i+1+ve[i];
		ste=ve[i];
//		cout<<i<<"_"<<ite<<" "<<ste<<" "<<sma<<endl;
		while(ite<=n){
			ste+=ve[ite-1];
			ite+=ve[ite-1];
//			cout<<i<<" "<<ite<<" "<<ste<<" "<<sma<<endl;
		}
		if(ste>sma){
			ima=i;
			sma=ste;
		}
	}
	return sma;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
