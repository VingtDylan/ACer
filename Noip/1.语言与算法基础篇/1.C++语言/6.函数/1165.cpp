#include<iostream>
#include<stdio.h>
using namespace std;

int f(int,int);

int main(){
    int n,x;cin>>n>>x;
    cout<<f(n,x)<<endl;
    return 0;
}

int f(int n,int x){
	if(n == 0)return 1;
	if(n == 1)return 2 * x;
	if(n > 1){
		return 2 * x * f(n - 1, x) - 2 * (n - 1) * f(n -2, x);
	}
}
