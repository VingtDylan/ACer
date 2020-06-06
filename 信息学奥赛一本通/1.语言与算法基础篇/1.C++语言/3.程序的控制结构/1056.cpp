#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x,y;cin>>x>>y;
	x > 1 || y > 1 || x < -1 || y < -1 ? cout<<"no":cout<<"yes";
	return 0;
}
