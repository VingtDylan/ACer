#include<iostream>
#include<stdio.h>
#include<math.h>
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
	if(n == 1)return sqrt(1+x);
	return sqrt(n + f(x, n - 1));
}
