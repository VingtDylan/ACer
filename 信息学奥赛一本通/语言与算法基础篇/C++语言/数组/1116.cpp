/*
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)cin>>a[i];
	int res = 1;
	int max = 1;
	int t = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] == t){
			max += 1;
		}
		if(i == n - 1 || a[i] != t){
			t = a[i];
			if(max > res){
				res = max;
			}
			max = 1;
		}
	}
	cout<<res<<endl;
	return 0;
}
*/


#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)cin>>a[i];
	int res = 1;
	int max = 1;
	for(int i = 1; i < n; i++){
		if(a[i] == a[i - 1])
			max++;
		else 
		    max = 1;
		if(max > res)
			res = max;
	}
	cout<<res<<endl;
	return 0;
}
