#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a = 0, b = 0, c = 0; 
	int k;
	for(int i = 0; i < n; i++){
		cin>>k;
		switch(k){
			case 1: a++;break;
			case 5: b++;break;
			case 10: c++;break;
		}	
	} 
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
