#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x,a,y,b;
	scanf("%d %d %d %d",&x,&a,&y,&b);
	printf("%.2lf",(b*y-a*x)*1.0/(1.0*(b-a)));
    return 0;
}
