#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

bool validate(vector<vector<ll>>m,ll n,ll k,ll mask){
	ll l=0;
	vector<ll>s(k,0);
	for(ll i=0;i<n;i++){
		if(mask&(1<<i)){
			l++;
			for(ll ik=0;ik<k;ik++){
				if(m[i][ik]) s[ik]++;
			}
		}
	}
	for(ll i=0;i<k;i++)
		if(2*s[i]>l) return false;
	return true;
}
string solve(){
	ll n,k,t;
	vector< vector<ll> > m;
	set<string>sm;
	cin>>n>>k;
	for(ll i=0;i<n;i++){
		vector<ll>vt;
		string s1="";
		for(ll j=0;j<k;j++){
			cin>>t;
			vt.push_back(t);
			s1 += to_string(t);
		}
		// cout<<s1<<":"<<endl;
		if(sm.find(s1)!=sm.end()) continue;
		sm.insert(s1);
		m.push_back(vt);
	}
	n=m.size();
	for(ll i=1;i<(1<<n);i++){
		if(validate(m,n,k,i)) return "YES";
	}
	return "NO";
}

int main(){
	ll T=1;
	// cin>>T;
	while(T--){
		cout<<solve()<<endl;
	}
	return 0;
}
