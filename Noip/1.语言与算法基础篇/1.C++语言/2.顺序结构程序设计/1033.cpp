#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	double a1,a2,b1,b2;
	scanf("%lf %lf %lf %lf",&a1,&a2,&b1,&b2);
	printf("%.3lf",sqrt(pow(b1-a1,2)+pow(b2-a2,2)));
	return 0;
}
