#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x;cin>>x;
	if(x == 100)cout<<"All";
	else if(x > 100)cout<<"Bike";
	else cout<<"Walk";
	return 0;
}
