#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char c[100000];
	gets(c);
	int pocket[26] = {0};
	int len = strlen(c);//strlen放在for里超时 
	for(int i = 0; i < len; i++){
		pocket[c[i] - 'a']++;
	}
	bool flag = false;
	for(int i = 0; i < len; i++){
		if(pocket[c[i] - 'a'] == 1){
			cout<<c[i]<<endl;
			flag = true;
			break;
		}
	}
	if(!flag)cout<<"no"<<endl;
	return 0;
}
