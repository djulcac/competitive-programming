#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(){
	ll p,q;
	cin>>p>>q;
	if(p==q)return 1;
	if(p<q)return p;
	if(p%q)return p;
	ll c=p/q;
	if(!q%c){
		for(ll i=q-1;i>0;i--)if(!p%i)return i;
	}
	// for(ll i=c;
	// ...
}
int main(){

	return 0;
}
