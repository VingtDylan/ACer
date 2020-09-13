#include<iostream>

using namespace std;

int n,m;
int a[21][21],f[21][21]; //实际不是!

void disp(int x,int y, int val);

int main(){
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int temp = 0;
            for(int k = 0; k <= j; k++){
                temp = max(temp,f[i - 1][k] + a[i][j - k]);
            }
            f[i][j] = temp;
        }
    }
    cout<<f[n][m]<<endl;
    disp(n,m,f[n][m]);
    return 0;
}

void disp(int x, int y, int val){
    if(x == 0)return;
    for(int k = 0; k <= y; k++){
        if(val == f[x - 1][k] + a[x][y - k]){
            disp(x - 1, k, val - a[x][y - k]);
            cout<<x<<" "<<y - k<<endl;
            break;
        }
    }
}