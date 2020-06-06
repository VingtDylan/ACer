#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void f(string,int);

int main(){
    string x;
	int m;
	cin>>x;
	m = x.length();
    f(x,m - 2);
    return 0;
}

void f(string x,int m){
    if(m <0)return;
    cout<<x[m];
    f(x,m-1);
	return;
}
