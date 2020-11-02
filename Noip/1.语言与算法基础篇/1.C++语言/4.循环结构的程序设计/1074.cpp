#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n = 12;
	int cost;
	int store = 0;
	int use = 0;
	bool flag = false;
	while(n--){
		cin>>cost;
		if(use + 300 < cost){
			cout<<n-12<<endl;
			flag = true;
			break;
		}
		int k = (use + 300 - cost) / 100;
		store += k * 100;
		use = use + 300 - cost - k * 100;
	}
	if(!flag){
		cout<<store * 1.2 + use;
	}
	return 0;
}
