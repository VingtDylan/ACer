#include <iostream>
#include <cstring>

using namespace std;

const int N = 1010;
char s[N];
int dp[N][N];

int main(){
    while (scanf("%s", s + 1) && s[1] != 'e'){
        int n = strlen(s + 1);
        memset(dp, 0, sizeof(dp));
        for(int len = 2; len <= n; len++){
            for(int l = 1; l + len - 1 <= n; l++){
                int r = l + len - 1;
                if(s[l] == '(' && s[r] == ')' || s[l] == '[' && s[r] == ']')
                    dp[l][r] = dp[l + 1][r - 1] + 2;
                for(int k = l; k < r; k++){
                    dp[l][r] = max(dp[l][r], dp[l][k] + dp[k][r]);
                }
            }
        }
        cout << dp[1][n] << endl;
    }
    return 0;
}