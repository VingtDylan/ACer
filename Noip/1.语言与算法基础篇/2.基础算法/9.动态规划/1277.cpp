#include<iostream>

using namespace std;

int n;
int a[11][11];
int r,c,t;
int f[11][11][11][11];

int main(){
    cin>>n;
    while(cin>>r>>c>>t && (r || c || t)){
        a[r][c] = t;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                for(int l = 1; l <= n; l++){
                    int tmp1 = max(f[i - 1][j][k - 1][l], f[i][j - 1][k][l - 1]);
                    int tmp2 = max(f[i][j - 1][k - 1][l], f[i - 1][j][k][l - 1]);
                    f[i][j][k][l] = max(tmp1,tmp2) + a[i][j];
                    if(i != k && j != l)f[i][j][k][l] += a[k][l];
                }
            }
        }
    }
    cout<<f[n][n][n][n]<<endl;
    return 0;
}
