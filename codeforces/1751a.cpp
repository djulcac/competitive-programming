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
	vector<vector<int>>gt0,gt1,gd0,gd1;
	// operar
	vector<vector<int>>vv;// para los costos
	vector<pair<int,int>>v2;
	// greedy
	set<int>st;// dependencia tareas ya ejecutadas
	set<int>sd;// dependencia data ejecutadas, no se usa
	vector<pair<int,int>>gr;// greedy orden
	vector<int>gr_ma;//ocupado hasta cuando
	// ans
	vector<vector<int>>ans;
	vector<int>vans_end;
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
		//sc.vta[t1].resize(tk);
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
	sc.gd0.resize(sc.nta);
	sc.gd1.resize(sc.nta);
	sc.gt0.resize(sc.nta);
	sc.gt1.resize(sc.nta);
	f(i,sc.N){
		cin>>t1>>t2;t1--;t2--;
		sc.gt0[t1].push_back(t2);
		sc.gt1[t2].push_back(t1);
	}
	cin>>sc.M;
	f(i,sc.M){
		cin>>t1>>t2;t1--;t2--;
		sc.gd0[t1].push_back(t2);
		sc.gd1[t2].push_back(t1);
	}
}

void read_print(){
	cout<<">"<<sc.nta<<" "<<sc.vt.size()<<" "<<sc.vm.size()<<" "<<sc.vd.size()<<endl;
//	f(i,sc.nta)cout<<sc.vt[i]<<" ";cout<<endl;
//	f(i,sc.vm.size())cout<<sc.vm[i]<<" ";cout<<endl;
//	f(i,sc.vd.size())cout<<sc.vd[i]<<" ";cout<<endl;
	f(i,sc.nta){
		cout<<i<<":"<<sc.vts[i]<<" "<<sc.vtd[i]<<endl;
		f(j,sc.vta[i].size())cout<<sc.vta[i][j]<<" ";cout<<endl;
	}
}

void build(){
	int ii=0;
	f(i,sc.nta){
		f(j,sc.vta[i].size()){
			f(k,sc.ndi){
				vector<int>vt(4);
				vt[0]=i;vt[1]=j;vt[2]=k,vt[3]=ceil(sc.vtd[i]/sc.vds[k]);
				sc.vv.push_back(vt);
				int tv=ceil(sc.vts[i]/sc.vmp[sc.vta[i][j]])+vt[3];
				sc.v2.emplace_back(tv,ii);
				ii++;
			}
		}
	}
}
void build_print(){
	f(i,sc.v2.size()){
		cout<<i<<" "<<sc.v2[i].first<<" "<<sc.v2[i].second<<" | ";
		cout<<sc.vv[i][0]<<" "<<sc.vv[i][1]<<" "<<sc.vv[i][2]<<" "<<sc.vv[i][3]<<endl;
	}
}

void greedy(){
	sort(sc.v2.begin(),sc.v2.end());
	while(sc.gr.size()<sc.nta)
	f(i,sc.v2.size()){
		int x=sc.vv[sc.v2[i].second][0];
//		cout<<i<<":"<<x<<" | "<<sc.gr.size()<<endl;
		if(sc.st.find(x)!=sc.st.end())continue;
		bool b=1;
		for(auto it:sc.gt1[x])
			if(sc.st.find(it)==sc.st.end()){b=0;break;}
		if(!b)continue;
		for(auto it:sc.gd1[x])
			if(sc.st.find(it)==sc.st.end()){b=0;break;}
		if(!b)continue;
//		cout<<i<<"::"<<sc.v2[i].first<<" "<<sc.v2[i].second<<endl;
		sc.gr.emplace_back(x,i);
		sc.st.insert(x);
	}
}

void greedy_print(){
	f(i,sc.gr.size()){
		cout<<i<<"|"<<sc.gr[i].first<<" "<<sc.gr[i].second<<endl;
	}
}

void build_ans(){
	sc.ans.resize(sc.nta);
	sc.vans_end.resize(sc.nta,0);
	sc.gr_ma.resize(sc.nma,0);
	int start=0;
	f(i,sc.gr.size()){
		int x=sc.gr[i].first;
		int ii=sc.gr[i].second;
		vector<int>vt(4);
		vt[0]=x;
//		vt[1]=start;
		vt[2]=sc.vv[ii][1];
		vt[3]=sc.vv[ii][2];
		int cost=sc.vv[ii][3]+sc.v2[ii].first;
		start=0;
		for(auto it:sc.gt1[x]){
			start=max(start,sc.vans_end[it]);
//			cout<<i<<" "<<it<<" "<<start<<endl;
		}
		start=max(start,sc.gr_ma[sc.vv[ii][1]]);
		vt[1]=start;
//		cout<<"build:"<<i<<" "<<x<<" "<<vt[0]<<" "<<vt[1]<<" "<<vt[2]<<" "<<vt[3]<<endl;
		sc.ans[x]=vt;
		sc.vans_end[x]=start+cost;
		sc.gr_ma[sc.vv[ii][1]]=start+cost;
	}
}

void print_ans(){
	for(auto it:sc.ans)cout<<it[0]+1<<" "<<it[1]<<" "<<it[2]+1<<" "<<it[2]+1<<endl;
}
void solve(){
//	cout<<"read"<<endl;
	read();
//	read_print();
//	cout<<"build"<<endl;
	build();
//	build_print();
//	cout<<"greedy"<<endl;
	greedy();
//	greedy_print();
//	cout<<"build_ans"<<endl;
	build_ans();
//	cout<<"print_ans"<<endl;
	print_ans();
}

int main(){
	ll T = 1;
	// cin>>T;
	while(T--) solve();
	//while(T--) cout<<solve()<<endl;
	return 0;
}
//3.2
