#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;

int main(){
	char c[255];
	gets(c);
	int res = 0;
	for(int i = 0; i < strlen(c);i++){
		if(isdigit(c[i]))res++;
	}
	cout<<res<<endl;
	return 0;
}
