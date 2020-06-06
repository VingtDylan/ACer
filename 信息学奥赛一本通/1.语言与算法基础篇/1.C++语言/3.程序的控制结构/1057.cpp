#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x,y;char o;
	cin>>x>>y>>o;
	if(o == '+')cout<<x+y;
	else if(o == '-')cout<<x-y;
	else if(o == '*')cout<<x*y;
	else if(o == '/'){
		if(y == 0) cout<<"Divided by zero!";
		else cout<<x/y;	
	}
	else cout<<"Invalid operator!";
	return 0;
}
