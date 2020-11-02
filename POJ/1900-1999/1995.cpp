#include<iostream>
using namespace std;

/**
 * 快速幂
 */

typedef long long ll;
ll z, m, n;
ll a,b;

ll power(ll a,ll b,ll p){
    ll res = 1 % p;
    for(;b;b>>=1){
        if(b & 1) res = (ll)res * a % p;
        a = (ll) a * a % p;
    }
    return res;
}

int main(){
    cin>>z;
    while (z--){
        cin>>m;
        cin>>n;
        ll res = 0;
        while(n--){
            cin>>a>>b;
            res = res + power(a,b,m);
        }
        cout<<res % m<<endl;
    }
    return 0;
}