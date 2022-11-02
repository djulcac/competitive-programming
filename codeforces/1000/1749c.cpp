// 2022-11-01T02:11:30.867528
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
// #define F(i,a,b) for(_int i=(a),_=(a)<(b);(_&&i<(b))||(!_&&i>(b));_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,nn;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	sort(ve.begin(),ve.end());
	F(k,n,-1){
		vector<ll>vc(ve.begin(),ve.end());
		int ir,ac=0;
		f(i,k){
			ir=-1;nn=vc.size()-1;
			F(j,nn,-1)if(vc[j]<=k-i){ir=j;break;}
			if(ir==-1)break;
			ac++;
			vc.erase(vc.begin()+ir);
			if(!vc.empty())vc.erase(vc.begin());
		}
		if(k==ac)return k;
	}
	return -1;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1