#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x,y,z;cin>>x>>y>>z;
	if(x>=y+z||y>=x+z||z>=x+y)cout<<"no";
	else cout<<"yes";
	return 0;
}
