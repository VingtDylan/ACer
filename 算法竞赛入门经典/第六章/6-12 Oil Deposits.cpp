#include <iostream>

using namespace std;

const int N = 110;
char a[N][N];
int m, n;
int dx[8] = {0, 0, -1, -1, -1, 1, 1, 1}, dy[8] = {-1, 1, 0, 1, -1, 0, 1, -1};

void dfs(int x, int y){
    a[x][y] = '*';
    for(int i = 0 ; i < 8; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx < 0 || tx >= m || ty < 0 || ty >= n) continue;
        if(a[tx][ty] == '*') continue;
        dfs(tx, ty);
    }
}

int main(){
    ios::sync_with_stdio(false);
    while(cin >> m >> n, m && n){
        for(int i = 0; i < m; i++) cin >> a[i];
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++) {
                if(a[i][j] == '@'){
                    res++;
                    dfs(i, j);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}

/*
 1 1
 *
 3 5
 *@*@*
 **@**
 *@*@*
 1 8
 @@****@*
 5 5
 ****@
 *@@*@
 *@**@
 @@@*@
 @@**@
 0 0

 0
 1
 2
 2
 */