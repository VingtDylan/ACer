#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int res = 0;
	int temp = 1;
	while(n >= temp){
		res += temp * temp;
		n -= temp;
		temp++;
	}
	cout<<res + n * temp<<endl;
	return 0;
}
