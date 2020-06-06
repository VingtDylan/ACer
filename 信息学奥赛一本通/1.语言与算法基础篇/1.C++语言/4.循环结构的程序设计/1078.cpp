#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
	double res = 0;
	int n;cin>>n;
	int p = 1;
	int q = 2;
	while(n--){
		res += q * 1.0 / p;
		q = p + q;
		p = q - p;
	}
	cout<<fixed<<setprecision(4)<<res<<endl;
	return 0;
}
