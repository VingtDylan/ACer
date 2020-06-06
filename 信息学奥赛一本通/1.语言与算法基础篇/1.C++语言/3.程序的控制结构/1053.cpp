#include<iostream>
#include<stdio.h>
using namespace std;
#define max(x,y) (x > y ? x : y)
int main(){
	int x,y,z;cin>>x>>y>>z;
	cout<<max(x,max(y,z));
	return 0;
}
