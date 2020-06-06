#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int s = 0;
	for(int i = m; i <= n; i++){
		s += i % 2 ? i : 0;
	}
	cout<<s<<endl;
	return 0;
}
