#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	int b[4] = {0};
	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(a[i]>=0&&a[i]<=18)b[0]++;
		else if(a[i]>=19&&a[i]<=35)b[1]++;
		else if(a[i]>=36&&a[i]<=60)b[2]++;
		else if(a[i]>=61)b[3]++;
	}
	int sum = b[0]+b[1]+b[2]+b[3];
	for(int i = 0; i < 4; i++){
		cout<<fixed<<setprecision(2)<<b[i]*100.0/sum<<"%"<<endl;
	}
	return 0;
}
