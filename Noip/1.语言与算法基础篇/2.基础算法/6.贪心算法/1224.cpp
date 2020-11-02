#include<iostream>
#include<cstring>
using namespace std;

int a[110][110];
int sum[110];

int main(){
    int n;cin>>n;
    memset(a,0,sizeof(a));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin>>a[i][j];
        }
    }
    int maxx = -128;//0过不了，果然就是刁难我胖虎，(全部都是-127的情况)
    for(int k = 1; k <= n; k++){
        memset(sum, 0, sizeof(sum));
        for(int i = k; i <= n; i++){
            for(int j = 1; j <= n; j++){
                sum[j] += a[i][j];
            }
            int tempmax = 0;
            for(int j = 1; j <= n; j++){
                if(tempmax < 0)tempmax = sum[j];
                else tempmax += sum[j];
                if(tempmax > maxx) maxx = tempmax;
            }
        }
    }
    cout<<maxx<<endl;
    return 0;
}