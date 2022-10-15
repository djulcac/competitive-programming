#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vl;
typedef vector<ii> vll;

#define N6 1000006
#define N5 100005
#define N N6

vector<ll> vc(30,0);
void dfs(vector<ll>*g,int index){
    // cout<<"bien"<<endl;
    if(vc[index]>0 || g[index].size()==0) return;
    vc[index]=1;
    for(int i=0;i<g[index].size();i++){
        dfs(g,g[index][i]);
    }
}
ll solve(){
    ll n, m, ans;
	cin>>n;
    vector<string>v;
    string ts;
    for(int i=0;i<n;i++){
        cin>>ts;
        v.push_back(ts);
    }
    // cout<<"bien"<<endl;
    // cout<<v[0]<<endl;
    // cout<<v[0][0]<<endl;
    // cout<<v[0][0]-'a'<<endl;
    // grafo
    vector<ll>g[30];
    // for(int i=0;i<30;i++){
    //     vector<ll>tv;
    //     g.push_back(tv);
    // }
    for(int i=0;i<n;i++){
        int a=v[i][0]-'a';
        int b=0;
        g[a].push_back(a);
        for(int is=1;is<v[i].size();is++){
            b=v[i][is]-'a';
            g[a].push_back(b);
            g[b].push_back(a);
            a=b;
        }
    }
    // contar
    ll c=0;
    // vector<ll>vc(30,0);
    for(int i=0;i<30;i++){
        if(vc[i]==0 && g[i].size()>0)c++;
        dfs(g,i);
    }
    // for(int i=0;i<vc.size();i++)cout<<vc[i]<<" ";
    // cout<<endl;
	return c;
}

int main(){
    ll T = 1;
	// cin>>T;
	while(T--) cout<<solve()<<endl;
	return 0;
}