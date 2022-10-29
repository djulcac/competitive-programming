#include<iostream>
using namespace std;
int main(){
    int n,res=1;
    char tem;
    bool con=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tem;
        if(tem=='1' and con)res++;
        else con=false;
    }
    if(res>n)res=n;
    cout<<res<<endl;
    return 0;
}