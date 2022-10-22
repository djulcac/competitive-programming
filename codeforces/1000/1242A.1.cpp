#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
bool p[1000006];
vector<long long>P;
 
long long solve(long long n){
    for(long long i=2;i<1000006;i++){
        if(p[i]) continue;
        P.push_back(i);
        for(long long j=i*i;j<1000006;j+=i){
            p[j] = true;
        }
    }
    
    if(n==1) return 1;
    long long c=0;
    for(long long i:P){
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