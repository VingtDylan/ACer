#include <iostream>
#include <cstring>

using namespace std;

const int N = 1010;
string a, b;
int f[N][N];

int main(){
    ios::sync_with_stdio(false);
    cin >> a >> b;
    memset(f, 0, sizeof(0));
    int m = a.length(), n = b.length();
    for(int i = 0; i <= m; i++) f[i][0] = i;
    for(int i = 0; i <= n; i++) f[0][i] = i;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++) {
            if(a[i - 1] == b[j - 1]){
                f[i][j] = f[i - 1][j - 1];
            }else{
                f[i][j] = 1 + min(min(f[i - 1][j - 1], f[i - 1][j]), f[i][j - 1]);
            }
        }
    }
    cout << f[m][n] << endl;
    return 0;
}

/*
 horse ros
 intention execution
 */