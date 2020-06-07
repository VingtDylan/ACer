#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n;cin>>n;
	int a[10000];
	for(int i = 0; i < n; i++)cin>>a[i];
	int res = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				swap(a[j],a[j + 1]);
				res++;
			} 
		}
	}
	cout<<res<<endl;
    return 0;
}
