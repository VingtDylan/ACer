#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n;cin>>n;
	int a[1001] = {0};
	int k;
	for(int i = 0; i < n; i++){
		cin>>k;
		a[k]++;
	}
	int count = 0;
	for(int i = 0; i < 1001; i++){
		if(a[i])
			count++;
	}
	cout<<count<<endl;
	for(int i = 0; i < 1001; i++){
		if(a[i])
			cout<<i<<" ";
	}
	cout<<endl;
    return 0;
}
