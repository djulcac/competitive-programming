#include<iostream>
#include<cstdio>
#define _n 500
using namespace std;
double v[_n];
int main(){
    double res=0,c;
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        res=max(res,(v[a-1]+v[b-1])/c);
    }
    printf("%.10f",res);
    return 0;
}