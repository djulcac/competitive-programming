// 2022-11-17T05:34:08.213691
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n,k,m,nn;
	cin>>n;
	string s;
	cin>>s;
	set<int>si;
	vector<int>vi;
	int t;
	f(i,s.size()){
		t=s[i]-'a';
		if(si.find(t)==si.end())vi.push_back(i);
		si.insert(t);
	}
	if(si.size()<n){
		cout<<"NO"<<endl;
		return 0;
	}
	int j=1;
	cout<<"YES\n"<<s[0];
	for(int i=1;i<s.size()&&j<n;i++)
		if(i==vi[j])cout<<endl<<s[i],j++;
		else cout<<s[i];
	for(int i=vi[n-1]+1;i<s.size();i++)cout<<s[i];cout<<endl;
	//f(i,vi.size())cout<<vi[i]<<" ";cout<<endl;
	return 0;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	//while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
