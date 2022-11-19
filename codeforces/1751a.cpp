// 2022-11-17T03:06:16.524789
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

class Schedule{
	public:
	int nta,nma,ndi;//number task machine disk
	vector<int>vt,vm,vd; // task machine disk
	vector<int>vts,vtd; // task: size data
	vector<vector<int>>vta; // task[i] affinitive
	vector<int>vmp; // machine: power
	vector<int>vds,vdc; // disk: speed, capacity
	int N,M;
	vector<vector<int>>gt,gd;
};
Schedule sc;
void read(){
	int t1,t2,t3,tk;
	cin>>sc.nta;
	sc.vt.resize(sc.nta);
	sc.vts.resize(sc.nta);
	sc.vtd.resize(sc.nta);
	sc.vta.resize(sc.nta);
	f(i,sc.nta){
		cin>>t1;t1--;
		cin>>sc.vts[t1]>>sc.vtd[t1];
		cin>>tk;
		sc.vta[t1].resize(tk);
		f(j,tk){
			cin>>t2;t2--;
			sc.vta[t1].push_back(t2);
		}
	}
	cin>>sc.nma;
	sc.vm.resize(sc.nma);
	sc.vmp.resize(sc.nma);
	f(i,sc.nma){
		cin>>t1;t1--;
		cin>>sc.vmp[t1];
	}
	cin>>sc.ndi;
	sc.vds.resize(sc.ndi);
	sc.vdc.resize(sc.ndi);
	f(i,sc.ndi){
		cin>>t1;t1--;
		cin>>sc.vds[t1]>>sc.vdc[t1];
	}
	cin>>sc.N;
	sc.gd.resize(sc.nta);
	sc.gt.resize(sc.nta);
	f(i,sc.N){
		cin>>t1>>t2;t1--;t2--;
		sc.gd[t2].push_back(t1);
	}
	cin>>sc.M;
	f(i,sc.M){
		cin>>t1>>t2;t1--;t2--;
		sc.gt[t2].push_back(t1);
	}
}
void solve(){
	read();
	cout<<"bien"<<endl;
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	//while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
