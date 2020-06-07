#include<iostream>
#include<stdio.h>

using namespace std;

int f(int m,int n){
	int c[21][21] = {0};
	for(int i = 0; i <= n; i++){
		c[0][i] = 1;
	}
	for(int i = 0; i <= m; i++){
		c[i][1] = 1;
	}
	for(int i = 1; i <= m; i++){
		for(int j = 2; j <= n; j++){
			if(i < j)
				c[i][j] = c[i][i];
			else
				c[i][j] = c[i][j - 1] + c[i - j][j];
		}
	}
	return c[m][n];
}

int main(){
	int t;cin>>t;
	int m,n;
	while(t--){
		cin>>m>>n;
		cout<<f(m ,n)<<endl;
	}
    return 0;
}
