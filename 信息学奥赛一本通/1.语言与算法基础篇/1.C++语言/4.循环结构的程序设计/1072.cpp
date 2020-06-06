#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a,b;
	cin>>a>>b;
	double r1 = b * 1.0 / a;
	n--;
	while(n--){
		cin>>a>>b;
		double r2 = b * 1.0 / a;
		if(r2 - r1 > 0.05)cout<<"better"<<endl;
		else if(r1 - r2 > 0.05)cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}
