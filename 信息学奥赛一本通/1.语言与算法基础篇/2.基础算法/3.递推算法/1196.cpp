#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	long long f[30] = {0};
	f[1] = 3;
	f[2] = 7;
	int index = 3;
	while(index <= n){
		f[index] = 2 * f[index - 1] + f[index - 2];
		index++;
	} 
	cout<<f[n]<<endl;
    return 0;
}
