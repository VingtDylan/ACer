#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int N = 1010;
int dp[N][N], pos[N][N];
string s;

void print(int l, int r){
    if(l > r) return;
    if(l == r) {
        if (s[l] == '(' || s[l] == ')') cout << "()";
        else cout << "[]";
    }else{
        if(pos[l][r] == -1){
            cout << s[l];
            print(l + 1, r - 1);
            cout << s[r];
        }else{
            print(l, pos[l][r]);
            print(pos[l][r] + 1, r);
        }
    }
}

int main(){
    cin >> s;
    memset(dp, 0, sizeof(dp));
    int n = s.size();
    for(int len = 2; len <= n; len++){
        for(int l = 0; l + len - 1 < n; l++){
            int r = l + len - 1;
            if(s[l] == '(' && s[r] == ')' || s[l] == '[' && s[r] == ']'){
                dp[l][r] = dp[l + 1][r - 1] + 2;
                pos[l][r] = -1;
            }
            for(int k = l; k < r; k++){
                if(dp[l][r] <= dp[l][k] + dp[k + 1][r]){
                    dp[l][r] = dp[l][k] + dp[k + 1][r];
                    pos[l][r] = k;
                }
            }
        }
    }
    print(0, n - 1);
    cout << endl; // 不输出换行符就WA...
    return 0;
}