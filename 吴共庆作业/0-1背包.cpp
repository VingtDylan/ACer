#include <iostream>

using namespace std;

const int N = 1010;
int n, m, v, w;
int dp[N];

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> v >> w;
        for(int j = m; j >= v; j--){
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    cout << dp[m] << endl;
    return 0;
}

/*
4 5
1 2
2 4
3 4
4 5

8
 */