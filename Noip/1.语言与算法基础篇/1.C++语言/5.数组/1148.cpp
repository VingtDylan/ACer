#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int k;cin>>k;
    char s[2500];cin>>s;
    int len = strlen(s);
    int sum = 0;
    for(int i = 0; i < len; i++){
    	if(sum == k){
    		cout<<s[i]<<endl;
    		return 0;
		}
		if(s[i] == s[i + 1]){
			sum++;
		}else
			sum = 1;
	}
	cout<<"No"<<endl;
    return 0;
}
