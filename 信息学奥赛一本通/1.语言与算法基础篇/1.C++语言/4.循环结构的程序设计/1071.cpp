#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int k;cin>>k;
	if(k <= 2)cout<<1;
	else{
		int pre = 1;
		int cur = 1;
		while(k > 2){
			cur = pre + cur;
			pre = cur - pre;
			k--;
		}
		cout<<cur;
	}
	return 0;
}
