// 2022-12-17T14:59:54.309365
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn,r;
	cin>>n>>m>>k;
	vector<ll>vm(m);
	for(ll &x:vm)cin>>x;
	ll ma=0;
	r=n%k;
	ll dnk=n/k;
	if(r)dnk++;
	ll ck=0;
	f(i,m){
		ma=max(ma,vm[i]);
		if(vm[i]==k)ck++;
	}
	if(m<k || dnk<ma || (n%k && r<ck))return "NO";
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
