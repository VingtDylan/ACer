#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i = 0 ; i < n; i++)cin>>a[i];
	int x;cin>>x;
	bool flag = false;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			cout<<i+1<<endl;
			flag = true;
			break;
		}
	}
	if(!flag)cout<<-1<<endl;
	return 0;
}
