#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
	int a[10];
	double b[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double res = 0;
	for(int i = 0; i < 10; i++){
		cin>>a[i];
		res += a[i] * b[i];
	}
	cout<<fixed<<setprecision(1)<<res<<endl;
	return 0;
}
