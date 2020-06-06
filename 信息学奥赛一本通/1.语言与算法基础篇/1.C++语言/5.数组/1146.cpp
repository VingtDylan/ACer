#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char s[1000];gets(s);
    int len=strlen(s);
	int l = 0, r = len - 1;
	bool flag = true;
	while(l < r){
		if(s[l] != s[r]){
			flag = false;
			break;
		}
		l++, r--;
	}
	if(flag)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
    return 0;
}
