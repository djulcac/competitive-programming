#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	int n,k,m,t,nn;
	string s;
	cin>>s;
	n=s.size();
	vector<int>ve[30];
	f(i,n)ve[s[i]-'a'].push_back(i);
	string ans="",abc="abcdefghijklmnopqrstuvwxyz";
	int ii=-1;
	F(i,29,-1){
		f(j,ve[i].size())if(ve[i][j]>ii){
			ans+=s[ve[i][j]];
			ii=ve[i][j];
		}
	}
	return ans;
}

int main(){
	ll T = 1;
	// cin>>T;
	//while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
