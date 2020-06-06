#include<iostream>
#include<stdio.h>
using namespace std;

int count(int);

int main(){
	int l,r;cin>>l>>r;
	int res = 0;
	for(int i = l;i <= r; i++){
		res += count(i);
	}	
	cout<<res<<endl;
	return 0;
}

int count(int n){
	int res = 0;
	while(n){
		if(n%10==2)res++;
		n/=10;
	}
	return res;
}
