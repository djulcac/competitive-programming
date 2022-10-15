#include<iostream>
using namespace std;
int m[100000];
int main(){
    int n,k;cin>>n>>k;  
    int vis[100001];
    for(int i=0;i<100001;i++)vis[i]=0;
    for(int i=0;i<n;i++)cin>>m[i];
    int l,r,c=1;
    l=0;r=1;
    vis[m[l]]++;
    while(r<n and c<k){
        if(vis[m[r]]==0)c++;
        vis[m[r]]++;
        r++;        
    }
    while(vis[m[l]]>1){vis[m[l]]--;l++;}
    if(c==k)cout<<l+1<<" "<<r<<endl;
    else cout<<-1<<" "<<-1<<endl;
    return 0;
}