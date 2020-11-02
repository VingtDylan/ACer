#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int sum = 0;
	int a;
	for(int i = 0;i < n;i++){
		cin>>a;
		sum +=a;
	}
	printf("%.2lf",sum * 1.0 / n);
	return 0;
}
