#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
	double x;
	int n;
	cin>>x>>n;
	double res = 1;
	double xm = 1.0;
	for(int i = 0; i < n; i++){
		xm *= x;
		res += xm;
	}
	cout<<fixed<<setprecision(2)<<res<<endl;
	return 0;
}
