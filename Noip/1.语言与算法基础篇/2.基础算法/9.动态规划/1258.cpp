#include<iostream>

using namespace std;

int r;
int a[1010][1010][2];

int main(){
    cin>>r;
    for(int i = 0; i < r; i++){
        for(int j = 0; j <= i; j++){
            cin>>a[i][j][0];
            a[i][j][1] = a[i][j][0];
        }
    }
    for(int i = r - 2; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(a[i + 1][j][1] > a[i + 1][j + 1][1]){
                a[i][j][1] = a[i][j][1] + a[i + 1][j][1];
            }else{
                a[i][j][1] = a[i][j][1] + a[i + 1][j + 1][1];
            }
        }
    }
    cout<<a[0][0][1]<<endl;
    return 0;
}