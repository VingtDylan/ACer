#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m,n;cin>>m>>n;
	int a[101][101] = {0};
	int res = 0;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || i == m || j == 1 || j == n){
				res += a[i][j];
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
