#include <iostream>
#include <cstring>

using namespace std;

const int m = 5, n = 6;
int a[m][n], b[m][n], dp[m][n];
int dx[] = {1, -1, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0};

void flip(int c[m][n], int x, int y){
    if(x < 0 || x >= m || y < 0 || y >= n) return;
    c[x][y] = 1 - c[x][y];
}

void reverseF(int c[m][n], int x, int y){
    for(int i= 0; i < 5; i++){
        flip(c, x + dx[i], y + dy[i]);
    }
}

int main(){
    for(int i  = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    for(int s = 0; s < 64; s++){
        memcpy(b, a, sizeof(a));
        memset(dp, 0, sizeof(dp));
        for(int k = 0; k < n; k++) {
            if (s >> k & 1) dp[0][k] = 1, reverseF(b, 0, k);
        }
        for(int i = 1; i < m; i++){
            for(int j = 0; j < n; j++){
                if(b[i - 1][j] != 0) dp[i][j] = 1, reverseF(b, i, j);
            }
        }

        bool flag = true;
        for(int i = 0; i < n; i++){
            if(b[m - 1][i] == 0) continue;
            else flag = false;
        }
        if(flag){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << dp[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }
    }
    return 0;
}

/*
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1


 */