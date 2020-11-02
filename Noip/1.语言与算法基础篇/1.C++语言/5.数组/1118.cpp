#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int x[n],y[n],a[n],b[n];
	for(int i = 0; i < n; i++){
		cin>>x[i]>>y[i]>>a[i]>>b[i];
	}
	int xx,yy;
	cin>>xx>>yy;
	int res = -1;
	for(int i = 0; i < n; i++){
		if(xx>=x[i]&&xx<=x[i]+a[i]&&yy>=y[i]&&yy<=y[i]+b[i]){
			res = i + 1;
		}
	}
	cout<<res<<endl;
	return 0;
}
