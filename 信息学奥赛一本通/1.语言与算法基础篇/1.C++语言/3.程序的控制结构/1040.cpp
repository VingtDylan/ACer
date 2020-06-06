#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	double f;cin>>f;
	if(f<0)f=-f;
	printf("%.2lf",f);
	return 0;
}
