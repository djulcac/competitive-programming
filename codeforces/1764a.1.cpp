// 2022-11-26T14:51:19.436825
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 100005
vector<ll>vp;
ll pr[N];
void build(){
	f(i,N)pr[i]=1;
	pr[0]=pr[1]=0;
	F(i,2,N)if(pr[i]==1)
		for(int j=2*i;j<N;j+=i)
			pr[j]=0;
	f(i,N)if(pr[i])vp.push_back(i);
}
ll solve(){
	ll n,k,m,nn;
	cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	ll a1=ve[0],an=ve[n-1];
	vector<ll>vv;
	ll t=a1;
	f(i,vp.size()){
		if(t%vp[i]==0)vv.push_back(vp[i]);
		while(t%vp[i]==0)t/=vp[i];
	}
	if(t>1)vv.push_back(t);
	vector<bool>vc(vv.size(),1);
	f(i,n){
		t=ve[i];
		f(j,vv.size()){
			if(t%vv[j])vc[j]=0;
			while(t%vv[j]==0)t/=vv[j];
		}
	}
	int ii=-1;
	f(i,vv.size())if(vv[i]){ii=i;break;}
	if(ii==-1)return an;
	ll ans=an/vv[ii];
	//cout<<a1<<" "<<an<<endl;
	//f(i,vv.size())cout<<vv[i]<<" ";cout<<endl;
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	build();
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
