#include <iostream>

using namespace std;

const int N = 101;
int n;
int g[N][N];

int main(){
    //cin >> n;
    n = 15;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            scanf("%d", &g[i][j]);
        }
    }
    for(int i = n - 1; i ; i--){
        for(int j = 1; j <= i; j++){
            g[i][j] += max(g[i + 1][j], g[i + 1][j + 1]);
        }
    }
    cout << g[1][1] << endl;
    return 0;
}