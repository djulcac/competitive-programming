#include <iostream>
#include <algorithm>
 
using namespace std;
 
long long solve(long long n){
    if(n==1) return 1;
    long long c=0;
    for(long long i=2;i*i<=n;i++){
        if(n%i!=0) continue;
        if(c) return 1;
        c=i;
        while(n%i==0) n/=i;
    }
    if(n>1 && c) return 1;
    if(n>1) return n;
    return c;
}
 
int main(){
    long long n;
    cin >> n;
    cout<<solve(n)<<endl;
}