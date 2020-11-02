#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

double f(double,int);

int main(){
    double x;
    int n;
    cin>>x>>n;
    cout<<fixed<<setprecision(2)<<f(x,n)<<endl;
    return 0;
}

double f(double x,int n){
	if(n == 1)return x / (1.0 + x);
	return x / (n + f(x, n - 1));
}
