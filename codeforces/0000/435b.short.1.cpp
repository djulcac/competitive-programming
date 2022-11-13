// 2022-11-04T04:52:20.020779
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	string ans;
	ll k;
	cin>>ans>>k;
	f(i,ans.size()){
		ll jma=i;
		for(int j=i+1;j<ans.size() && j-i<=k;j++)
			if(ans[j]>ans[jma])jma=j;
		k-=jma-i;
		while(jma!=i){swap(ans[jma],ans[jma-1]);jma--;}
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
//3.2