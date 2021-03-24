#include<iostream>

using namespace std;

const int maxn = 5010;
int N,r;
int g[maxn][maxn];

int main(){
    cin >> N >> r;
    int x, y, w;
    int n = r, m = r;
    for(int i = 0; i < N; i++){
        cin >> x >> y >>w;
        ++x,++y;
        g[x][y] += w;
        n = max(n, x);
        m = max(m, y);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            g[i][j] += g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];
        }
    }
    int res = 0;
    for(int i = r; i <= n; i++){
        for(int j = r; j <= m; j++){
            res = max(res, g[i][j] - g[i - r][j] - g[i][j - r] + g[i - r][j - r]);
        }
    }
    cout<<res<<endl;
    return 0;
}