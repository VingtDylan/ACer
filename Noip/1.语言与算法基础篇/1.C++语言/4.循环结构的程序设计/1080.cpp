#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int x = 1;
	while(++x){
		int d = a % x;
		int e = b % x;
		int f = c % x;
		if(d==e && e==f)
			break;
	}
	cout<<x;
	return 0;
}
