#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	double sum = 0;
	double a;
	for(int i = 0;i < n;i++){
		cin>>a;
		sum +=a;
	}
	printf("%.4lf",sum / n);
	return 0;
}
