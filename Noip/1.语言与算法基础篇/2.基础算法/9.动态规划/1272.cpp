#include<iostream>

using namespace std;

int v,n,t;
int w[31],c[31];
int p;
int a[11][32];
int f[210];

int main(){
    cin>>v>>n>>t;
    for(int i = 1; i <= n; i++){
        cin>>w[i]>>c[i]>>p;
        a[p][++a[p][0]] = i;
    }
    for(int i = 1; i <= t; i++){
        for(int j = v; j >= 0; j--){
            for(int k = 1; k <= a[i][0]; k++){
                if(j >= w[a[i][k]]){
                    int temp = a[i][k];
                    if(f[j] < f[j - w[temp]] + c[temp])
                        f[j] = f[j - w[temp]] + c[temp];
                }
            }
        }
    }
    cout<<f[v]<<endl;
    return 0;
}
