#include<iostream>

using namespace std;

int m,n;
int w[31],c[31];
int f[201];

int main(){
    cin>>m>>n;
    for(int i = 0; i < n; i++){
        cin>>w[i]>>c[i];
    }
    for(int i = 0; i < n; i++){
        for(int v = m; v >= w[i]; v--){
            if(f[v - w[i]] + c[i] > f[v])
                f[v] = f[v - w[i]] + c[i];
        }
    }
    cout<<f[m]<<endl;
    return 0;
}
