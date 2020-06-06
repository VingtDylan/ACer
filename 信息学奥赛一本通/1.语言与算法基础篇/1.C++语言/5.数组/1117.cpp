#include<iostream>
#include<stdio.h>
#include<cstring> 
using namespace std;

int main(){
	int n;cin>>n;
	int a[50000];//为啥5000不行，我吐了啊 
	int b[20000];
	memset(a,0,sizeof(a));
	for(int i = 0; i < n; i++){
		cin>>b[i];
		if(a[b[i]]!=0){
			b[i] = 0;
		}else{
			a[b[i]] = 1;
		}
	}
	bool flag = false;
	for(int i = 0; i < n; i++){
		if(b[i]!=0){
			if(flag)
				cout<<" "<<b[i];
			else{
				cout<<b[i];
				flag = true;
			}
		}
	}
	cout<<endl;
	return 0;
}
