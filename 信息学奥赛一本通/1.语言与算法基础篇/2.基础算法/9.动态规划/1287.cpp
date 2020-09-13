#include<iostream>

using namespace std;

int n;
int a[110][110];
int f[110][110];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>a[i][j];
    f[0][0] = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!i && !j)continue;
            else if(!i) f[i][j] = f[i][j - 1] + a[i][j];
            else if(!j) f[i][j] = f[i - 1][j] + a[i][j];
            else f[i][j] = min(f[i - 1][j], f[i][j - 1]) + a[i][j];
        }
    }
    cout<<f[n - 1][n - 1]<<endl;
    return 0;
}
