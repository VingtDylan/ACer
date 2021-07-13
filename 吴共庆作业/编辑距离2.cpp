#include <iostream>
#include <cstring>
#include <unordered_map>

using namespace std;
unordered_map<string, int> mp;
const string operation[6] = {"copy", "replace", "delete", "insert", "twiddle", "kill"};
const int cost[6] = {1, 1, 1, 1, 1, 1};

const int N = 1010;
int f[N][N];

int main(){
    ios::sync_with_stdio(false);
    for(int i = 0; i < 6; i++) mp[operation[i]] = cost[i];
    memset(f, 0x3f, sizeof(f));

    string a = "algorithm", b = "altruistic";
    int m = a.length(), n = b.size();

    for(int i = 0; i <= n; i++) f[0][i] = i * mp["insert"];
    for(int i = 0; i <= m; i++) f[i][0] = i * mp["delete"];
    if(n == 0) f[m][n] = min(f[m][n], mp["kill"]);

    for(int ix = 1; ix <= m; ix++) {
        for(int iy = 1; iy <= n; iy++){
            int i = ix - 1, j = iy - 1;
            if(a[i] == b[j]) f[i][j] = min(f[i][j], f[i - 1][j - 1] + mp["cost"]);
            else f[i][j] = min(f[i][j], f[i - 1][j - 1] + mp["replace"]);
            f[i][j] = min(f[i][j], f[i - 1][j] + mp["delete"]);
            f[i][j] = min(f[i][j], f[i][j - 1] + mp["insert"]);
            if(i >= 1 && j >= 1){
                if(a[i] == b[j - 1] && a[i - 1] == b[j])
                    f[i][j] = min(f[i][j], f[i - 2][j - 2] + mp["twiddle"]);
            }
        }
    }

    for(int i = 0; i < m; i++)
        f[m][n] = min(f[m][n], f[i][n] + mp["kill"]);

    cout << f[m][n] << endl;

    return 0;
}