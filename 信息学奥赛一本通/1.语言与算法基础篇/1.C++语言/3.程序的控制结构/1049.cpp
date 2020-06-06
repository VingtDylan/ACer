#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a;cin>>a;
	switch(a){
		case 1:
		case 3:
		case 5: cout<<"NO";break;
		default:cout<<"YES";
	}
	return 0;
}
