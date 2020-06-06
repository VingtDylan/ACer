#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int l,m;cin>>l>>m;
	int t[l + 1] = {0};
	int a[m],b[m];
	for(int i = 0; i < m; i++){
		cin>>a[i]>>b[i]; 
		for(int j = a[i]; j <= b[i];j++){
			t[j] = 1;
		}
	}
	int res = 0;
	for(int i= 0; i < l + 1; i++){
		t[i] = 1 - t[i];
		res += t[i];
	}
	cout<<res<<endl;
	return 0;
}
