#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n,m,k;cin>>n>>m>>k;
	int a[n][m],b[m][k];
	int c[n][k];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k; j++){
			cin>>b[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			c[i][j] = 0;
			for(int l = 0; l < m; l++){
				c[i][j] += a[i][l] * b[l][j];
			}
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
