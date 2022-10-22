#include<bits/stdc++.h>
using namespace std;

int64_t p,q,x,i,t;

void solve(){
	// ll p,q;
	cin>>p>>q;
	set<int64_t>d;
	x=q;
	for(i=2;i*i<=x;i++)
		if(x%i==0){
			d.insert(i);
			while(x%i==0)x/=i;
		}
	if(x>1){
		d.insert(x);
		x=1;
	}
	for(auto it:d){
		t=p;
		// t2=*it;
		while(t%q==0)t/=it;
		x=max(x,t);
	}
	cout<<x<<endl;
	// return x;
}

int main(){
	int T = 1;
	cin>>T;
	while(T--) solve();
	// while(T--) cout<<solve()<<endl;
	return 0;
}
//3