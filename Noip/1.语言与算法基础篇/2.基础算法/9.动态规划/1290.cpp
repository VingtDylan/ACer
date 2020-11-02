#include<iostream>

using namespace std;

int t,m;
int a[101],b[101];
int c[1001];

int main(){
    cin>>t>>m;
    for(int i = 1; i <= m; i++){
        cin>>a[i]>>b[i];
    }
    for(int i = 1; i <= m; i++){
        for(int j = t; j >= a[i]; j--){
            c[j] = max(c[j],c[j - a[i]] + b[i]);
        }
    }
    cout<<c[t]<<endl;
    return 0;
}
