#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	long long  a[100] = {0},b[100] = {0};
	for(int i = 1; i <= x; i++){
		a[i] = 1;
		b[i] = 0;
	}
	for(int i = x + 1; i <= z + 1; i++){
		b[i] = y * a[i - x];
		a[i] = a[i - 1] + b[i - 2];
	}
	cout<<a[z + 1]<<endl;
    return 0;
}
