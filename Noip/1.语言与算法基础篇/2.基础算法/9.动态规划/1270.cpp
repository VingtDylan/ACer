#include<iostream>

using namespace std;

int m,n;
int w[31],c[31],p[31];
int f[201];

int main(){
    cin>>m>>n;
    for(int i = 0; i < n; i++){
        cin>>w[i]>>c[i]>>p[i];
    }
    for(int i = 0; i < n; i++){
        if(p[i] == 0){
            for(int j = w[i]; j <= m; j++){
                f[j] = max(f[j], f[j - w[i]] + c[i]);
            }
        }else{
            for(int j = 1; j <= p[i]; j++){
                for(int k = m; k >= w[i]; k--){
                    f[k] = max(f[k], f[k - w[i]] + c[i]);
                }
            }
        }
    }
    cout<<f[m]<<endl;
    return 0;
}
