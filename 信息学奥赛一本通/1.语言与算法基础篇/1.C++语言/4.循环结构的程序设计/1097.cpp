#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m,n;
	char c;
	int f;
	cin>>m>>n>>c>>f;
	if(f == 1){
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cout<<c;
			}
			cout<<endl;
		}
	}else{
		for(int j = 0; j < n; j++){
			cout<<c;
		}
		cout<<endl;
		for(int i = 0; i < m - 2; i++){
			for(int j = 0; j < n; j++){
				if(j == 0 || j == n - 1)cout<<c;
				else cout<<" ";
			}
			cout<<endl;
		}
		for(int j = 0; j < n; j++){
			cout<<c;
		}
		cout<<endl;
	}
	return 0;
}
