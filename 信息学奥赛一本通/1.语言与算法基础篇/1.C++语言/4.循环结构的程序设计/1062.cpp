#include<iostream>
#include<stdio.h>
using namespace std;
#define max(x,y)  x > y ? x : y
int main(){
	int n;cin>>n;
	int a;
	int mx = -1;
	for(int i = 0; i < n; i++){
		cin>>a;
		mx = max(a,mx);
	}
	cout<<mx;
	return 0;
}
