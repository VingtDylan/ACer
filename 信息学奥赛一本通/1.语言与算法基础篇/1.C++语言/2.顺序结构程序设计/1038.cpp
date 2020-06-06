#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	int k = int(ceil(y * 1.0 / x));
	if(k >= n)
		cout<<0;
	else
		cout<<n-k;
	return 0;
}
