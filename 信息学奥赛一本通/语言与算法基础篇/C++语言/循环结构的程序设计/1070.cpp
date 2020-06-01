#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
	int x,n;cin>>x>>n;
	double res = x;
	while(n--){
		res *= (1+0.001);
	}
	cout<<fixed<<setprecision(4)<<res<<endl; 
	return 0;
}
