// 2022-11-29T04:15:06.760916
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn;
	int x,y;
	cin>>x>>y;
	int ii=0;
	while(1){
		if(y<2||(x==1&&y<12)||(x<=0&&y<22))break;
		if(ii%2==0){t=min(2,x);x-=t;y-=22-t*10;}
		if(ii%2)
			if(y>=22)y-=22;
			else if(y>=12)y-=12,x--;
			else y-=2,x-=2;
		ii++;
	}
	if(ii%2)return "Ciel";
	return "Hanako";
}

int main(){
	ll T = 1;
	// cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
