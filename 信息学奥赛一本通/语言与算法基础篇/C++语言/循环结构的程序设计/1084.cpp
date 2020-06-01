#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int c = 1000;
	int res = 1;
	while(b){
		if(b&1){
			res = res * a % c;
		}
		b >>= 1;
		a = a * a % c;
	}
	printf("%03d",res);
	return 0;
}
