#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int f[20] = {0};
	f[1] = 1;
	f[2] = 2;
	int index = 3;
	while(index <= n){
		f[index] = (f[index - 1] + f[index - 2]);
		index++;
	} 
	cout<<f[n]<<endl;
    return 0;
}
