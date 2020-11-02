#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a[10];
	for(int i = 0; i < 10; i++)cin>>a[i];
	int m;cin>>m;
	int res = 0;
	for(int i = 0; i < 10; i++)res += (a[i] <= m + 30);
	cout<<res<<endl;
	return 0;
}
