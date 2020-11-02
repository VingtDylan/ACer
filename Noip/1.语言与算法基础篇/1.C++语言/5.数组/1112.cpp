#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m;cin>>m;
	int a[10000] = {};//int a[m]ฒโสตละดํฃฌฮาท๐มห 
	int mina = 10001;
	int maxa = -10001;
	for(int i = 0; i < m; i++){
		cin>>a[i];
		if(a[i] > maxa)maxa = a[i];
		if(a[i] < mina)mina = a[i];
	}
	cout<<maxa-mina<<endl;
	return 0;
}
