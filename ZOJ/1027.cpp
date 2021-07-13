#include <iostream>
#include <cstring>
#include <string>
#include <unordered_map>

using namespace std;

const int score[5][5] = {
        {5, -1, -2, -1, -3},
        {-1, 5, -3, -2, -4},
        {-2, -3, 5, -2, -2},
        {-1, -2, -2, 5, -1},
        {-3, -4, -2, -1, 0}
};
const int N = 110;
int dp[N][N];
unordered_map<char, int> mp;
char a[N], b[N];
int la, lb;
int t;
int x, y, z;

int main(){
    mp['A'] = 0, mp['C'] = 1, mp['G'] = 2, mp['T'] = 3, mp['-'] = 4;
    cin >> t;
    while (t--){
        scanf("%d %s",&la, a + 1);
        scanf("%d %s",&lb, b + 1);
        memset(dp, 0xff, sizeof(dp));
        dp[0][0] = 0;
        for(int i = 1; i <= la; i++) dp[i][0] = dp[i - 1][0] + score[mp[a[i]]][4];
        for(int i = 1; i <= lb; i++) dp[0][i] = dp[0][i - 1] + score[4][mp[b[i]]];
        for(int i = 1; i <= la; i++){
            for(int j = 1; j <= lb; j++){
                x = dp[i - 1][j] + score[mp[a[i]]][4];
                y = dp[i][j - 1] + score[4][mp[b[j]]];
                z = dp[i - 1][j - 1] + score[mp[a[i]]][mp[b[j]]];
                dp[i][j] = max(max(x, y), z);
            }
        }
        cout << dp[la][lb] << endl;
    }
    return 0;
}
/*
2
7 AGTGATG
5 GTTAG
7 AGCTATT
9 AGCTTTAAA


14
21
 */