#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

string solve(){
	ll n,t;
	vector<ll>ve;
	cin>>n;
	f(i,n)cin>>t,ve.push_back(t-1);
	vector<vector<ll>>gr;
	for(int i=0;i<n;){
		vector<ll>te;
		te.push_back(ve[i]);
		i++;
		while(ve[i]-1==ve[i-1])te.push_back(ve[i]),i++;
		gr.push_back(te);
	}
	// cout<<"---1"<<endl;
	// f(i,gr.size()){
	// 	f(j,gr[i].size()){
	// 		cout<<gr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// cout<<"---2"<<endl;
	vector<ll>ans;
	f(i,gr.size())f(j,gr[gr.size()-1-i].size())ans.push_back(gr[gr.size()-1-i][j]);
	// cout<<"---3"<<endl;
	// f(i,ans.size())cout<<ans[i]<<",";cout<<endl;
	f(i,ans.size())if(ans[i]!=i)return "No";
	return "Yes";
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3