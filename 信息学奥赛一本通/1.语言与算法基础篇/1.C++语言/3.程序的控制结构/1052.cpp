#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	int x;char y;
	cin>>x>>y;
	int s = 0;
	if(x <= 1000)s=8;
	if(x > 1000)s=8+4*ceil((x-1000)/500.0);
	s+= y == 'y' ? 5 : 0;
	cout<<s<<endl;
	return 0;
}
