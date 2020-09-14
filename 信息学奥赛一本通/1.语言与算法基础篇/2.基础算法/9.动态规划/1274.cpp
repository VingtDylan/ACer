#include<iostream>
#include<string.h>
using namespace std;

int n;
int a[101];
int s[101];
int f[101][101];

int main(){
    //n = 7;
    //a[1] = 13, a[2] = 7, a[3] = 8, a[4] = 16, a[5] = 21, a[6] = 4, a[7] = 18;
    cin>>n;
    for(int i = 1; i <= n; i++)cin>>a[i];
    for(int i = 1; i <= n; i++)s[i] = s[i - 1] + a[i];
    /*
    memset(f,127 / 3,sizeof(f));
    for(int i = 1; i <= n; i++)f[i][i] = 0;
    for(int i = n - 1; i >= 1; i--){
        for(int j = i + 1; j <= n; j++){
            for(int k = i; k <= j - 1; k++){
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + s[j] - s[i - 1]);
            }
        }
    }*/
    memset(f,127 / 3,sizeof(f));
    for(int i = 1; i <= n; i++)f[i][i] = 0;
    for(int i = 2; i <= n; i++){
        for(int j = i - 1; j >= 1; j--){
            for(int k = j; k < i; k++){
                f[j][i] = min(f[j][i],f[j][k] + f[k + 1][i] + s[i] - s[j - 1]);
            }
        }
    }
    cout<<f[1][n]<<endl;
    return 0;
}
