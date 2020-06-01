#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	int n;cin>>n;
	double res = 0;
	double x,y;//可以不是整数，吐了 
	int people;
	while(n--){
		cin>>x>>y>>people;
		res += 2*sqrt(x*x+y*y)/50.0 + 1.5 * people;
	} 
	cout<<ceil(res);
	return 0;
}
