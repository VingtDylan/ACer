#include<iostream>
#include<stdio.h>
using namespace std;

int f(int,int);

int main(){
    int n,k;cin>>n>>k;
    cout<<f(n,k);
    return 0;
}

int f(int n,int k){
	if(k == 1)return n % 10;
	return f(n / 10, k - 1);
}
