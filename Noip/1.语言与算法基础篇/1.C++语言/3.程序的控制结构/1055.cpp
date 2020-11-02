#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x;cin>>x;
	if(x%400 == 0 || (x%100 && x %4 == 0))cout<<"Y";
	else cout<<"N";
	return 0;
}
