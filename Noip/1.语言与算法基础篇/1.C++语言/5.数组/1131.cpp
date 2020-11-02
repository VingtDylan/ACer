#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char a[500],b[500]; 
	double thre;
	cin>>thre>>a>>b; 
	int res = 0;
	int len = strlen(a);
	for(int i = 0; i < len; i++){
		res += a[i] == b[i];
	}
	if(res >= thre * len)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
