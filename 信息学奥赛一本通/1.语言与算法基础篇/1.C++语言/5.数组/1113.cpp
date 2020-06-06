#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	int maxa = -1000001;
	int res = 0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(a[i]>maxa)maxa = a[i];
	} 
	for(int i = 0; i < n; i++){
		if(a[i]!=maxa)res += a[i];
	} 
	cout<<res<<endl;
	return 0;
}
