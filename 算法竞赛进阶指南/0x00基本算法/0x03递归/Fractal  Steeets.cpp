#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

pll calc(ll n, ll m){
    if(n == 0)return {0, 0};
    ll len = 1ll << (n - 1), cnt = 1ll << (2 * n - 2);
    pll pos = calc(n - 1, m % cnt);
    ll x = pos.first, y = pos.second;
    ll z = m / cnt;
    if(z == 0)return{y, x};
    if(z == 1)return{x, y + len};
    if(z == 2)return{x + len, y + len};
    return {2 * len - 1 - y, len - 1 - x};
}

int main(){
    int N;
    cin>>N;
    ll n,a,b;
    while(N--){
        cin>>n>>a>>b;
        pll ac = calc(n, a - 1);
        pll bc = calc(n, b - 1);
        ll x = ac.first - bc.first, y = ac.second - bc.second;
        double ans=(sqrt(double(x * x + y * y)) * 10);
        printf("%0.lf\n",ans);
    }
    return 0;
}