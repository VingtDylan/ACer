#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n],b[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		cin>>b[i];
		b[i] = a[i] * b[i];
	}
	for(int i = 1; i < n; i++){
		b[i] = b[i - 1] + b[i];
	}
	cout<<b[n - 1]<<endl;
	return 0;
}
