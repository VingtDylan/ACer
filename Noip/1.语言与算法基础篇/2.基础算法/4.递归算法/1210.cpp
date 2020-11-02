#include<iostream>

using namespace std;

const int maxn = 101;
int a[maxn],b[maxn];

void split(int n, int fac){
    if(n == 0 || fac > n)return ;
    while(n % fac == 0){
        n /= fac;
        a[fac]++;
    }
    split(n, fac + 1);
}

int main(){
    int n;cin>>n;
    split(n,2);
    bool flag = false;
    for(int i = 2; i <= n; i++){
        if(flag && a[i])cout<<"*";
        if(a[i])flag = true;
        if(a[i] == 1)cout<<i;
        else if(a[i] > 1)cout<<i<<"^"<<a[i];
    }
    cout<<endl;
    return 0;
}