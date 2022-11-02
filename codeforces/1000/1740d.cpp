#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)
#define N 100005

string solve(){
	ll n,m,k,a,b,h,w,t;
	ll ar[N];
	cin>>n>>m>>k;
	f(i,k)cin>>ar[i];
	// f(i,k)cout<<ar[i]<<" ";cout<<endl;
	// for(int i=(n-1)*(m-1);i<k;i++){
	// 	if(k-ar[i]+1<=i)return "TIDAK";
	// }
	set<ll>se;
	ll er[N],ner;
	// set<ll>::iterator it;
	ll nex=1,mi,nt;
	ll ac=n*m-4;
	for(int i=0;i<k;i++){
		t=k-ar[i]+1;
		// cout<<">"<<se.size()<<" "<<nex<<" "<<t<<" "<<ar[i]<<" "<<k<<endl;
		if(t==nex){
			nex++;
			while(se.find(nex)!=se.end())se.erase(nex),nex++;
			// nt=se.size();
			// ner=0;
			// for(auto it=se.begin();it!=se.end();it++){
			// 	// if(*it<=nex) se.erase(*it);
			// 	if(*it<=nex)er[ner]=*it,ner++;
			// }
			// f(i,ner)se.erase(er[i]);
			continue;
		}
		// cout<<">>"<<se.size()<<" "<<nex<<" "<<t<<" "<<ar[i]<<" "<<k<<endl;
		if(se.size()==ac)return "TIDAK";
		se.insert(t);
	}
	return "YA";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1