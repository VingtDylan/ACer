#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	bool a[n] = {false};
	for(int i = 1; i <= m; i++){
		for(int j = 1; i * j <= n; j++){
			a[i * j - 1] = !a[i * j - 1];
		}
	}
	bool flag = false;
	for(int i = 0; i < n ;i++){
		if(a[i]){
			if(flag){
				cout<<","<<i+1; 
			}else{
				cout<<i+1;
				flag = true;
			}
		}
	}
	return 0;
}
