#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a,b,c;
	int as=0,bs=0,cs=0;
	for(int i = 0; i < n; i++){
		cin>>a>>b>>c;
		as+=a;
		bs+=b;
		cs+=c;
	}
	cout<<as<<" "<<bs<<" "<<cs<<" "<<as+bs+cs;
	return 0;
}
