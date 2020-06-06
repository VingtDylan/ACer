#include<iostream>
#include<stdio.h>
using namespace std;

int f(int);

int main(){
    int n;cin>>n;
    cout<<f(n)<<endl;
    return 0;
}

int f(int x){
    if(x <= 1)return 0;
    if(x == 2)return 1;
    return f(x - 1) + f(x-2);
}
