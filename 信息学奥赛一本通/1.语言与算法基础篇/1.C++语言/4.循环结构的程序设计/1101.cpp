#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b,c;cin>>a>>b>>c;
	int res = 0;
	for(int x = 0; x <= 1000; x++){
		if((c-a*x) % b ==0)res++;
		if(a*x>c)break;
	}
	cout<<res<<endl;
	return 0;
}
