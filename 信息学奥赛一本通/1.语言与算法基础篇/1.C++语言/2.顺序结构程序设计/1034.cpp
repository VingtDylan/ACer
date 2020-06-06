#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	float a1,a2,b1,b2,c1,c2;
	scanf("%f %f %f %f %f %f",&a1,&a2,&b1,&b2,&c1,&c2);
	printf("%.2lf",abs(((b1-a1)*(c2-a2))-((c1-a1)*(b2-a2)))/2.0);
	return 0;
}
