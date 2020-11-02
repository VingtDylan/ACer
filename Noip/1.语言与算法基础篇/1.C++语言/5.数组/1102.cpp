#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)cin>>a[i];
	int m;cin>>m;
	int res = 0;
	for(int i = 0; i < n; i++)res += a[i] == m;
	cout<<res<<endl;
	return 0;
}
