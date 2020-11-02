#include<iostream>
#include<stdio.h>
using namespace std;

void f(int,int);

char a[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int main(){
    int x,m;cin>>x>>m;
    f(x,m);
    return 0;
}

void f(int x,int m){
    if(x<m){
    	cout<<a[x];
	}else{
		f(x / m,m);
		cout<<a[x%m];
	}
	return;
}
