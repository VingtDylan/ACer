#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
	int n;cin>>n;
	double res = 1;
	double fac = 1;
	for(int i = 1; i <= n; i++){
		fac *= 1.0 / i;
		res += fac;
	}
	cout<<fixed<<setprecision(10)<<res<<endl;
	return 0;
}
