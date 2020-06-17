#include<iostream>

using namespace std;

int m,n;
int a[1025][1025];

int main(){
    cin>>m;
    n = 1 << m;
    int k = 1;
    int half = 1;
    a[0][0] = 1;
    while(k <= m){
        for(int i = 0; i < half; i++){
            for(int j = 0; j < half; j++){
                a[i][j + half] = a[i][j] + half;
            }
        }
        for(int i = 0; i < half; i++){
            for(int j = 0; j < half; j++){
                a[i + half][j] = a[i][j + half];
                a[i + half][j + half] = a[i ][j];
            }
        }
        k++;
        half *= 2;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}