#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	int h,r;
	scanf("%d %d",&h,&r);
	printf("%d",int(ceil(20.0 * 1000/(3.1415926*r*r*h))));
	return 0;
}
