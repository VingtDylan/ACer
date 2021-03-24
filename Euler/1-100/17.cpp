#include <iostream>

using namespace std;

int dp[101];

/*
 * one 3
 * two 3
 * three 5
 * four 4
 * five 4
 * six 3
 * seven 5
 * eight 5
 * nine 4
 * ten 3
 * eleven 6
 * twelve 6
 * thirteen 8 thirty 6
 * fourteen 8 forty 5
 * fifteen 7 fifty 5
 * sixteen 7 sixty 5
 * seventeen 9 seventy 7
 * eighteen 8 eighty 6
 * nineteen 7 ninety 6
 * twenty 6
 */
int main(){
    dp[1] = 3, dp[2] = 3, dp[3] = 5, dp[4] = 4, dp[5] = 4, dp[6] = 3, dp[7] = 5, dp[8] = 5, dp[9] = 4, dp[10] = 3;
    dp[11] = 6, dp[12] = 6, dp[13] = 8, dp[14] = 8, dp[15] = 7, dp[16] = 7, dp[17] = 9, dp[18] = 8, dp[19] = 8, dp[20] = 6;
    dp[30] = 6;
    dp[40] = 5;
    dp[50] = 5;
    dp[60] = 5;
    dp[70] = 7;
    dp[80] = 6;
    dp[90] = 6;
    for(int k = 2; k <= 9; k++){
        for(int i = 1; i <= 9; i++){
            dp[k * 10 + i] = dp[k * 10] + dp[i];
        }
    }
    int res = 0;
    for(int i = 1; i <= 999; i++){
        if(i / 100){
            res += (dp[i / 100] + 3 + 7);
        }
        res += dp[i % 100];
    }
    res += 11;
    cout << res << endl;
    return 0;
}