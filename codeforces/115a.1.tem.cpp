#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,t;
	cin>>n;
	set<ll>se[n];
	bool b=false;
	f(i,n){
		cin>>t;
		b=false;
		f(j,n){
			if(se[j].size()==0){
				se[j].insert(i+1);
				if(t!=-1)se[j].insert(t);
				break;
			}
			if(t==-1){
				if(se[j].find(i+1)!=se[j].end()){
					se[j].insert(i+1);
					if(t!=-1)se[j].insert(t);
					break;
				}
			}else{
				if(se[j].find(t)!=se[j].end() && se[j].find(i+1)!=se[j].end()){
					se[j].insert(i+1);
					if(t!=-1)se[j].insert(t);
					break;
				}
			}
		}
	}
	ll ans=0,i=0;
	while(i<n && se[i].size())ans++,i++,cout<<i<<"-"<<se[i].size()<<endl;
	cout<<"end"<<endl;
	f(i,n){
		for(auto it:se[i])cout<<it<<" ";
		cout<<endl;
	}
	return ans;
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3