#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(){
	int m,n;cin>>m>>n;
	int a[m][n],b[m][n];
	int res = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>b[i][j];
			if(a[i][j] == b[i][j])res++;
		}
	}
	cout<<fixed<<setprecision(2)<<res * 100.0 / m / n<<endl;;
	return 0;
}
