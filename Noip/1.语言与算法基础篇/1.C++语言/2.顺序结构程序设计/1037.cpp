#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int res = 1;
	int n;
	cin>>n;
	while(n > 0){
		res *= 2;
		n--;
	}
	cout<<res<<endl;
	return 0;
}
