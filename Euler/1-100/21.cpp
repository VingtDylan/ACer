#include <iostream>
#include <cmath>
using namespace std;

int dp[10010];

void set_dp(int x){
    int s = 0;
    for(int i = 1; i <= sqrt(x); i++){
        if(x % i) continue;
        if(i * i == x) s += i;
        else s += (i + x / i);
    }
    dp[x] = s - x;
}

int main(){
    int n = 10000;
    for(int i = 1; i <= n; i++){
        set_dp(i);
    }
    int res = 0;
    for(int i = 1; i <= n; i++){
        int a = i;
        int b = dp[a];
        if(a != b && a == dp[b]) res += a;
    }
    cout << res << endl;
    return 0;
}