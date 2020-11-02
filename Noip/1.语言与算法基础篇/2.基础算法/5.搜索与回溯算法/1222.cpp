#include<iostream>
#include<string.h>
using namespace std;

int a[30][30];

int f(int m,int n){
    for(int i = 0; i <= m; i++){
        a[i][1] = 1;
    }
    for(int i = 0; i <= n; i++){
        a[0][i] = 1;
    }
    for(int i = 1; i <= m; i++){
        for(int j = 2; j <= n; j++){
            if(i < j){
                a[i][j] = a[i][i];
            }else{
                a[i][j] = a[i][j - 1] + a[i - j][j];
            }
        }
    }
    return a[m][n];
}

int main(){
    int t;cin>>t;
    int m,n;
    while(t--){
        memset(a, 0, sizeof(a));
        cin>>m>>n;
        cout<<f(m,n)<<endl;
    }
    return 0;
}