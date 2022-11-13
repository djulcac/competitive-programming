#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	string s;cin>>s;
	vector<char>vo={'a','e','i','o','u','y'};
	vector<char>ve;
	f(i,s.size())if(find(vo.begin(),vo.end(),tolower(s[i]))==vo.end())
		ve.push_back(tolower(s[i]));
	string ans="";
	f(i,ve.size())ans=ans+"."+ve[i];
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