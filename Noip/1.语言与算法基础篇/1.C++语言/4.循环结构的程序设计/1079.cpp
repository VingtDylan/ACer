#include<iostream>
#include<stdio.h>
#include<iomanip> 
using namespace std;

int main(){
	int n;cin>>n;
	int sign = 1;
	double res = 0;
	for(int i = 1; i <= n; i++){
		res += 1.0 / (sign * i);
		sign *= -1;
	}
	cout<<fixed<<setprecision(4)<<res<<endl;
	return 0;
}
