#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>a);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

void solve(){
	int n,k;
	cin>>n>>k;
	n=2*n+1;
	vector<int>ve(n);
	for(int &x:ve)cin>>x;
	int nn=n-1;
	F(i,1,nn)if(i%2&&ve[i]-ve[i-1]>1&&ve[i]-ve[i+1]>1){
		ve[i]--;
		k--;
		if(!k)break;
	}
	f(i,n)cout<<ve[i]<<" ";cout<<endl;
}

int main(){
	int T=1;
	while(T--)solve();
	return 0;
}
