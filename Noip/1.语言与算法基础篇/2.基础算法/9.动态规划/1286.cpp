#include<iostream>

using namespace std;

int k;
int n;
int a[110];
int d[110];

int LIS(){
    int ret = 1;
    for(int i = 0; i < n; i++){
        d[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && d[j] + 1 > d[i]) {
                d[i] = d[j] + 1;
            }
        }
        ret = max(ret, d[i]);
    }
    return ret;
}

int LDS(){
    int ret = 1;
    for(int i = 0; i < n; i++){
        d[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[j] > a[i] && d[j] + 1 > d[i]) {
                d[i] = d[j] + 1;
            }
        }
        ret = max(ret, d[i]);
    }
    return ret;
}

int main(){
    cin>>k;
    while(k--){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout<<max(LIS(),LDS())<<endl;
    }
    return 0;
}
