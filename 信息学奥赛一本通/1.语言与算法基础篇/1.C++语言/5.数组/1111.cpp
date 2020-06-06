#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a[7],b[7];
	int maxa = -1,index = 0;
	for(int i = 0; i < 7; i++){
		cin>>a[i]>>b[i];
		int k = a[i] + b[i];
		if(k > 8){
			if(k > maxa){
				maxa = k;
				index = i + 1;
			}
		}
	}
	if(maxa == -1)cout<<0<<endl;
	else cout<<index<<endl;
	return 0;
}
