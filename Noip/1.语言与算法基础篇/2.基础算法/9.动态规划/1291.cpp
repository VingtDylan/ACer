#include<iostream>

using namespace std;

int n,m;
int a[1001];
long long f[10001];

int main(){
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }
    f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = m; j >= a[i]; j--){
            f[j] += f[j - a[i]];
        }
    }
    cout<<f[m]<<endl;
    return 0;
}
