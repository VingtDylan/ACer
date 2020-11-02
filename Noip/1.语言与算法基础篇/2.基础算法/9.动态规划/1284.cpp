#include<iostream>
#include<string.h>
using namespace std;

int t;
int r,c;
int a[110][110];
int b[110][110];

int main(){
    cin>>t;
    while(t--){
        cin>>r>>c;
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                cin>>a[i][j];
            }
        }
        memset(b,0,sizeof(b));
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                b[i][j] = max(b[i - 1][j], b[i][j - 1]) + a[i][j];
            }
        }
        cout<<b[r][c]<<endl;
    }
    return 0;
}
