#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	char a[10],b[10];
	while(n--){
		cin>>a>>b;
		if(a[0]=='R'&&b[0]=='S'||a[0]=='S'&&b[0]=='P'||a[0]=='P'&&b[0]=='R')
            cout<<"Player1"<<endl;
        else if(a[0]==b[0])
            cout<<"Tie"<<endl;
        else
            cout<<"Player2"<<endl;
	}
	return 0;
}
