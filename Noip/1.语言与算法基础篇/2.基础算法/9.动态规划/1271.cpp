#include<iostream>
#include<string.h>
using namespace std;

int m,n;
int k;
int a[1010],b[1010],c[1010];
int f[101][101];

int main(){
    cin>>m>>n;
    cin>>k;
    for(int i = 0; i < k; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    memset(f,127,sizeof(f));
    f[0][0] = 0;
    for(int i = 0; i < k; i++){
        for(int j = m; j >= 0; j--){
            for(int k = n; k >= 0; k--){
                int mm = j + a[i];
                int nn = k + b[i];
                if(mm > m) mm = m;
                if(nn > n) nn = n;
                if(f[mm][nn] > f[j][k] + c[i])
                    f[mm][nn] = f[j][k] + c[i];
            }
        }
    }
    cout<<f[m][n]<<endl;
    return 0;
}
