#include<iostream>
#include<stdio.h>
using namespace std;

bool check(int);

int main(){
	int n;cin>>n;
	int num;
	int res = 0;
	while(n--){
		cin>>num;
		if(check(num)){
			res++;
		}
	}
	cout<<res<<endl;
	return 0;
}

bool check(int num){
	int a = num % 10;
	int b = num /10 % 10;
	int c = num /100 % 10;
	int d = num / 1000;
	if(a > d + c + b)return true;
	return false;
}
