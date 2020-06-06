#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	int a;
	int res = 0;
	for(int i = 0; i < n; i++){
		cin>>a;
		res += a == m; 
	}
	cout<<res;
	return 0;
}
