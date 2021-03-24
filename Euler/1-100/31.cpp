#include <iostream>

using namespace std;

int dp[201];
int a[8] = {1, 2, 5, 10, 20, 50, 100, 200};

int main(){
    dp[0] = 1;
    for(int i = 0; i < 8; i++){
        for(int j = 1; j <= 200; j++){
            if(j >= a[i]){
                dp[j] += dp[j - a[i]];
            }
        }
    }
    for(int i = 0; i <= 10; i++){
        cout << i << " " << dp[i] << endl;
    }
    cout << dp[200] << endl;
    return 0;
}