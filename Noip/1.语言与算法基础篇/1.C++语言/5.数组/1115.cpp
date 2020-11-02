#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int f[10000] = {0};
	int max = 0;
	int a;
	for(int i = 0; i < n; i++){
		cin>>a;
		f[a]++;
		if(a > max)max = a;
	}
	for(int i = 0; i <= max; i++)cout<<f[i]<<endl;
	return 0;
}
