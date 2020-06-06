#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b,n;
	cin>>a>>b>>n;
	while(n--){
		a = a % b;
		a = a * 10;
	}
	a = a / b;
	cout<<a;
	return 0;
}
