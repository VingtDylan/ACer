#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[500] = {0};
	int k;
	for(int i = 0; i < n; i++){
		cin>>k;
		a[k]++;
	}
	bool flag = false;
	for(int i = 1; i < 500; i+= 2){
		while(a[i]){
			if(flag)
				cout<<","<<i;
			else{
				cout<<i;
				flag = true;	
			}
			a[i]--;
		}
	}
	cout<<endl;
    return 0;
}
