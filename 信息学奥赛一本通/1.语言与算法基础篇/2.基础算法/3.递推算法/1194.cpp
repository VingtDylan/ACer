#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int f[20][20] = {0};
	for(int i = 1; i <= m; i++)f[i][1] = 1;
	for(int i = 1; i <= n; i++)f[1][i] = 1;
	for(int i = 2; i <= m; i++){
		for(int j = 2; j<= n; j++){
			f[i][j] = f[i - 1][j] + f[i][j - 1]; 
		}
	}
	cout<<f[m][n]<<endl;
    return 0;
}

