#include<iostream>

using namespace std;

int n,k;
long long s;
long long a[11][11],f[11][11];

int main(){
    cin>>n>>k;
    cin>>s;
    //n = 4, k = 2;
    //s = 1231;
    for(int i = n; i >= 1; i--){
        a[i][i] = s % 10;
        s /= 10;
    }
    for(int i = 1; i <= n; i++){
        for(int j = i - 1; j >= 1; j--){
            a[j][i] = a[j][i - 1] * 10 + a[i][i];
        }
    }
    for(int i = 1; i <= n; i++){
        f[i][0] = a[1][i];
    }
    for(int i = 1; i <= k; i++){
        for(int j = i + 1; j <= n; j++){
            for(int l = i; l < j; l++){
                f[j][i] = max(f[j][i], f[l][i - 1] * a[l + 1][j]);
            }
        }
    }
    cout<<f[n][k]<<endl;
    return 0;
}
