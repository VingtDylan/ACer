#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m;cin>>m;
	int n;cin>>n;
	int res = 0;
	int cost;
	while(n--){
		cin>>cost;
		if(cost > m)res++;
		else m -= cost;
	}
	cout<<res<<endl;
	return 0;
}
