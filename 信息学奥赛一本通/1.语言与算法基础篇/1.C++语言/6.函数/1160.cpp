#include<iostream>
#include<stdio.h>
using namespace std;

void f(int);

int main(){
    int n;cin>>n;
    f(n);
    return 0;
}

void f(int x){
    if(x<=10){
    	cout<<x<<endl;
	}
    else{
    	cout<<x%10;
    	f(x/10);
	}
	return ;
}
