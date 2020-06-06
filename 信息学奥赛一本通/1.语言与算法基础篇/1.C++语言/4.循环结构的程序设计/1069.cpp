#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,n;cin>>a>>n;
	int res = 1;
	while(n--){
		res *= a;
	}
	cout<<res;
	return 0;
}
