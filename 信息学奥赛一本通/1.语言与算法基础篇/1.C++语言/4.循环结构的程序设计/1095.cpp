#include<iostream>
#include<stdio.h>
using namespace std;

int count(int);

int main(){
	int n;cin>>n;
	int res = 0;
	for(int i = 1;i <= n; i++){
		res += count(i);
	}	
	cout<<res<<endl;
	return 0;
}

int count(int n){
	int res = 0;
	while(n){
		if(n%10==1)res++;
		n/=10;
	}
	return res;
}
