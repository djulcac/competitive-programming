// 2022-11-12T15:29:36.943630
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

bool ok(string s){
	return true;
}
ll solve(){
	ll n,k,m,t,nn;
	cin>>n;
	string s;cin>>s;
	vector<ll>vi[10];
	f(i,s.size())vi[s[i]-'0'].push_back(i);
	// ll pre[n+1];f(i,n+1)pre[i]=0;
	vector<ll>vm[10];
	f(i,10)vm[i].resize(n+1,0);
	F(i,1,n+1){
		ll ii=s[i-1]-'0';
		f(j,10)if(j==ii)vm[j][i]=vm[j][i-1]+1;
		else vm[j][i]=vm[j][i-1];
	}
	ll ans=n*(n+1)/2;
	cout<<":"<<ans<<endl;
	f(tt,10){
		ll noc=vi[tt].size()*(vi[tt].size()+1)/2;
		cout<<tt<<"--a"<<ans<<" "<<noc<<endl;
		F(i,0,vi[tt].size()){
			int il=vi[tt][i]+1;
			F(j,i,vi[tt].size()){
				int ir=vi[tt][j]+1;
				ll cdif=0;
				ll cmax=0;
				f(ci,10){
					if(vm[ci][ir]-vm[ci][il-1]>0)cdif++;
					cmax=max(cmax,vm[ci][ir]-vm[ci][il-1]);
				}
				if(cmax<=cdif)noc--;
				if(vm[tt][ir]-vm[tt][il-1]>10)break;
			}
			cout<<tt<<"----"<<ans<<" "<<noc<<endl;
		}
		ans-=noc;
		cout<<"--b"<<ans<<" "<<noc<<endl;
	}
	return ans;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2