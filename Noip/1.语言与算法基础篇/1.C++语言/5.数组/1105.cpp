#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)cin>>a[i];
	for(int i = 0; i < n-1; i++)cout<<a[n-1-i]<<" ";
	cout<<a[0]<<endl;
	return 0;
}
