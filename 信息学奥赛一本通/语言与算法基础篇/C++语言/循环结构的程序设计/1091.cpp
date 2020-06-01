#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int fac = 1;
	int res = 0;
	int n;cin>>n;
	for(int i = 1; i <= n; i++){
		fac *= i;
		res += fac;
	}
	cout<<res<<endl;
	return 0;
}
