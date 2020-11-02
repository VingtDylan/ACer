#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	int k = int(a / b);
	printf("%g",a - k * b);
	return 0;
}
