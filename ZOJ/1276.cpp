#include <iostream>
#include <cstring>

using namespace std;

const int N = 12;
int a[N], dp[N][N], pos[N][N];
int n;

void print(int left, int right){
    if(left >= right) printf("A%d", left);
    else{
        printf("(");
        print(left, pos[left][right]);
        printf(" x ");
        print(pos[left][right] + 1, right);
        printf(")");
    }
}

int main(){
    int tt = 1;
    while (cin >> n, n) {
        for(int i = 0; i < n; i++) cin >> a[i] >> a[i + 1];
        memset(dp, 0x3f, sizeof(dp));
        for(int i = 1; i <= n; i++) dp[i][i] = 0;
        for(int len = 2; len <= n; len++){
            for(int l = 1; l + len - 1 <= n; l++){
                int r = l + len - 1;
                for(int k = l; k < r; k++){
                    int temp = dp[l][k] + dp[k + 1][r] + a[l - 1] * a[k] * a[r];
                    if(temp < dp[l][r]){
                        dp[l][r] = temp;
                        pos[l][r] = k;
                    }
                }
            }
        }
        printf("Case %d: ", tt++);
        print(1, n);
        printf("\n");
    }
    return 0;
}
/*
3
1 5
5 20
20 1
3
5 10
10 20
20 35
6
30 35
35 15
15 5
5 10
10 20
20 25
0


Case 1: (A1 x (A2 x A3))
Case 2: ((A1 x A2) x A3)
Case 3: ((A1 x (A2 x A3)) x ((A4 x A5) x A6))
 */