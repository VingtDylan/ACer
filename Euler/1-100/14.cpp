#include <iostream>

using namespace std;

const int N = 1000001;
long long dp[N];

int main(){
    dp[1] = 1;
    dp[2] = 2;
    dp[4] = 3;
    long long maxn = 1;
    long long res;
    for(long long i = 1; i < N; i++){
        long long t = i;
        long long ret = 0;
        while (t < N && dp[t] == 0 || t >= N){
            if(t % 2){
                t = 3 * t + 1;
            }else{
                t = t / 2;
            }
            ret++;
            //cout << t << endl;
        }
        dp[i] = ret + dp[t];
        if(dp[i] > maxn) maxn = dp[i], res = i;
    }
    cout << res << endl;
    return 0;
}