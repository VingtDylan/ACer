#include<iostream>
#include<stdio.h>
using namespace std;

bool check(int,int);

int main(){
	int m,k;cin>>m>>k;
	if(check(m,k)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}

bool check(int m,int k){
	if(m % 19)return false;
	int count = 0;
	while(m){
		if(m % 10 == 3)count++;
		m /=10;
	}
	return count == k;
}
