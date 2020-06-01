#include<iostream>
#include<stdio.h>
using namespace std;

bool check(int);

int main(){
	int n;cin>>n;
	int res = 0;
	for(int i= 1; i<= n; i++){
		if(!check(i)){
			res += i * i;
		}
	}
	cout<<res<<endl;
	return 0;
}

bool check(int n){
	if(n % 7 == 0)return true;
	while(n){
		if(n%10 == 7)return true;
		n /= 10;
	}
	return false;
}
