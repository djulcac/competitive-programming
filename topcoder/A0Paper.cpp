#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define f4(i,a,b,step) for(_int i=a,_=a<b,_2=abs(step);(_&&i<b)||(!_&&i>b);_?i+=_2:i-=_2)
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

class A0Paper{
    public:
    string canBuild(vector<int> a){
        int res=1;
        f(i,a.size()){
            if(a[i]>=res) return "Possible";
            res-=a[i];
            res*=2;
        }
        return "Impossible";
    }
};
