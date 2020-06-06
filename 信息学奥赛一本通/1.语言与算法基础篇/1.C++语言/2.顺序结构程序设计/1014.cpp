#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	double r;
	const double pi = 3.14159;
	scanf("%lf",&r);
	printf("%.4lf %.4lf %.4lf",2*r,2*pi*r,pi*r*r);
	return 0;
}
