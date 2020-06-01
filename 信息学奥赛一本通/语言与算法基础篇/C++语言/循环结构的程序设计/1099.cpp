#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
bool prime(int);

int main(){
	int n;
	cin>>n;
	int k = 2;
	while(n){
		if(prime(k))n--;
		k++;
	}
	cout<<k-1<<endl;
	return 0;
}

bool prime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0)return false; 
	}
	return true;
}
