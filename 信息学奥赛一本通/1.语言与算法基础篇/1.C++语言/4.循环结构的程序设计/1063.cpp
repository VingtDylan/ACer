#include<iostream>
#include<stdio.h>
using namespace std;
#define max(x,y)  x > y ? x : y
#define min(x,y)  x < y ? x : y 
int main(){
	int n;cin>>n;
	int a;
	int mxx = -1;
	int mnx = 1001;
	for(int i = 0; i < n; i++){
		cin>>a;
		mxx = max(a,mxx);
		mnx = min(a,mnx);
	}
	cout<<mxx-mnx;
	return 0;
}
