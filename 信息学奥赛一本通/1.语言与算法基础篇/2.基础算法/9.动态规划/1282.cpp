#include<iostream>
#include<string.h>

using namespace std;

int n;
int a[110][110];
int f[110];

int mArray(int t[], int n){
    int s = 0;
    int mx = -0x3f3f3f3f;
    for(int i = 0; i < n; i++){
        if(s > 0) s += t[i];
        else s = t[i];
        mx = max(mx, s);
    }
    return mx;
}

int main(){
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    int mxx = -0x3f3f3f3f;
    for(int i = 0; i < n; i++){
        memset(f,0,sizeof(f));
        for(int j = i; j < n; j++){
            for(int k = 0; k < n; k++){
                f[k] += a[j][k];
            }
            mxx = max(mxx,mArray(f,n));
        }
    }
    cout<<mxx<<endl;
    return 0;
}