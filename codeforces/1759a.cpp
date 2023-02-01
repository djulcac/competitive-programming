// 2022-11-18T14:35:57.084169
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,k,m,t,nn;
	string r="Yes",s;
	cin>>s;
	int ii=-1;
	bool ok=0;
	f(i,3)if(s[0]==r[i]){
		ok=1;
		ii=i;
		break;
	}
	if(!ok)return "NO";
	ii=(ii+1)%3;
//	cout<<">>"<<ok<<" "<<ii<<endl;
	for(int i=1;i<s.size();i++){
//		cout<<s[i]<<" "<<r[i]<<" "<<i<<" "<<ii<<endl;
		if(s[i]!=r[ii]){
			ok=0;
			break;
		}
		else ii=(ii+1)%3;
	}
	if(ok)return"YES";
	return "NO";
}

int main(){
	ll T = 1;
	cin>>T;
	//while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
