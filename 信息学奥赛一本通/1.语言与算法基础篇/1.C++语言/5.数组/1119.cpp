#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(){
	int a[5][5] = {0};
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin>>a[i][j];
		}
	}
	int m,n;cin>>m>>n;
	m-=1;n-=1; 
	for(int i = 0; i < 5; i++){
		swap(a[m][i],a[n][i]);
		//a[m][i] ^= a[n][i];
		//a[n][i] ^= a[m][i];
		//a[m][i] ^= a[n][i];
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			j == 0 ? cout<<a[i][j] : cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
