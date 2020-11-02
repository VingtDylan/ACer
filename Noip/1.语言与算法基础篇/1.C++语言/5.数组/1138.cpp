#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char a[256];gets(a);
	int len = strlen(a);
	for(int i = 0; i < len; i++){
		if(a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	puts(a);
	return 0;
}
