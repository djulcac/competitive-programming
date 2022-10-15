#include <iostream>
#include <algorithm>
 
using namespace std;
 
int l[50];
 
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++)cin>>l[i];
    sort(l,l+2*n);
    for(int i=0;i<n;i++)
        cout<<l[i]<<" "<<l[n+i]<<" ";
    cout<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}