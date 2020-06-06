#include<iostream>
#include<stdio.h>
using namespace std;

int cal(int,char,int);

int main(){
    int x,y;
    char op;
    cin>>x>>op>>y;
    cout<<cal(x,op,y);
    return 0;
}

int cal(int x,char op,int y){
	if(op == '+')return x + y;
	if(op == '-')return x - y;
	if(op == '*')return x * y;
	if(op == '/')return x / y;
}
