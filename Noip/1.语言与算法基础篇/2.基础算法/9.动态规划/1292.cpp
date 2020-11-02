#include<iostream>

using namespace std;

const int HP = 501;
const int Demons = 101;
int balls[Demons];
int hp[HP];
int n,m,k;
int dp[1001][1001];

int main() {
    cin>>n>>m>>k;
    for(int i = 1; i <= k; i++){
        cin>>balls[i]>>hp[i];
    }
    for(int i = 1; i <= k; i++){
        for(int j = n; j >= balls[i]; j--){
            for(int l = m; l >= hp[i]; l--){
                dp[j][l] = max(dp[j][l],dp[j - balls[i]][l - hp[i]] + 1);
            }
        }
    }
    int ans = 0;
    for(; ans <= m; ans++){
        if(dp[n][ans] == dp[n][m])break;
    }
    cout<<dp[n][m]<<" "<<m - ans<<endl;
    return 0;
}