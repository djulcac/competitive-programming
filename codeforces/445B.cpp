#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
long long int con;
vector<int>v[51];
bool vis[51];
void dfs(int x){
    con*=2;
    vis[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]])dfs(v[x][i]);
    }
}
 
int main(){
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<=n;i++)vis[i]=false;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
 
    }
    con=1;
    for(int i=0;i<=n;i++)vis[i]=false;
    for(int i=1;i<=n;i++)
        if(!vis[i]){
            dfs(i);
            con/=2;
        }
    cout<<con<<endl;
    return 0;
}