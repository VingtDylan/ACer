#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	long long f[71];
	memset(f,0,sizeof(f));
	f[1] = 1;
	f[2] = 2;
	f[3] = 4;
	int a;
	int index = 4;
	while(cin>>a && a != 0){
		if(f[a])cout<<f[a]<<endl;
		else{
			while(index <= a){
				f[index] = (f[index - 1] + f[index - 2] + f[index - 3]);
				index++;
			}
			cout<<f[a]<<endl;
		}
	} 
    return 0;
}
