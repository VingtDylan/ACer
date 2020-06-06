#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a;
	scanf("%d",&a);
	int b = 100 * (a % 10) + 10 * (a / 10 % 10) + a / 100;
	printf("%03d",b);
	return 0;
}
