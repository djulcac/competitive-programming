// 2022-11-01T02:11:30.867528
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define _int int
#define F(i,a,b) for(_int i=a,_=a<b;(_&&i<b)||(!_&&i>b);_?i++:i--)
#define f(i,n) for(_int i=0;i<n;i++)

ll solve(){
	ll n;cin>>n;
	vector<ll>ve(n);
	for(ll &x:ve)cin>>x;
	sort(ve.begin(),ve.end());
	F(k,n,-1){
		vector<bool>vb;
		f(i,k)if(k-1+i<n && ve[k-1+i]<=i+1)vb.push_back(true);
		else vb.push_back(false);
		bool b=true;
		f(i,vb.size())if(!vb[i])b=false;
		if(b)return k;
	}
	return -1;
}

int main(){
	ll T = 1;
	cin>>T;
	// while(T--) solve();
	while(T--) cout<<solve()<<endl;
	return 0;
}
//3.1
/*
16 la diferencia ve[k-1+i]<=i+1 nos ayuda a validar que en la
ultima jugada (para el k) se puede remover un elemento
se quita todos k elementos menores, porq bob agregara valores y 
no se podran eliminar, entonces, los siguientes k deben en el
peor de los casos deben ser consecutivos, asi en cada paso
alice tomara el maximo de este nuevo subgrupo
*/