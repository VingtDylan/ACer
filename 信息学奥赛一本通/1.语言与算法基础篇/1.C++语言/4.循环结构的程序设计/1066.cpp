#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int s = 0;
	for(int i = m; i <= n; i++){
		s += i % 17 ? 0 : i;
	}
	cout<<s<<endl;
	return 0;
}
