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
    if(x <= 0)return 0;
    if(x == 1)return 1;
    else return f(x - 1) + x;
}
