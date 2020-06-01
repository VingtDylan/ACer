#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	double a,b,c;cin>>a>>b>>c;
	double delta = pow(b,2)-4*a*c;
	if(abs(delta)<1e-7){
		printf("x1=x2=%.5lf",-b/2/a);
	}else if(delta > 0){
		if(a > 0)
			printf("x1=%.5lf;x2=%.5lf",(-b-sqrt(delta))/2/a,(-b+sqrt(delta))/2/a);
		else 
			printf("x1=%.5lf;x2=%.5lf",(-b+sqrt(delta))/2/a,(-b-sqrt(delta))/2/a);
	}else 
		cout<<"No answer!";
	return 0;
}
