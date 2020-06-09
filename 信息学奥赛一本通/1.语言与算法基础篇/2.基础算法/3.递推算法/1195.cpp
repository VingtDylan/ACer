#include<iostream>
#include<string.h>

using namespace std;

const int N = 10010;
const int K = 110;
long long a[N];
bool dp[N][K];

int main(){
    int n,k;cin>>n>>k;
    memset(dp, false, sizeof(dp));
    for(int i = 1; i <= n; i++)cin>>a[i];
    dp[0][0] = true;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < k; j++){
            dp[i][j] = dp[i - 1][(j + a[i]) % k] || dp[i - 1][(j - a[i] % k + k) % k];
        }
    }
    if(dp[n][0])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
