#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a[5][5] = {0};
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin>>a[i][j];
		}
	}
	int mx[5];
	int mn[5];
	for(int i = 0; i < 5; i++){
		int max = a[i][0];
		for(int j = 0; j < 5; j++){
			if(a[i][j] >= max){
				max = a[i][j];
				mx[i] = j;
			}
		}
	}
	for(int i = 0; i < 5; i++){
		int min = a[0][i];
		for(int j = 0; j < 5; j++){
			if(a[j][i] <= min){
				min = a[j][i];
				mn[i] = j;
			}
		}
	}
	bool flag = false;
	for(int i = 0; i < 5; i++){
		if(mn[mx[i]] == i){
			cout<<i+1<<" "<<mx[i]+1<<" "<<a[i][mx[i]]<<endl;
			flag = true;
		}
	} 
	if(!flag)cout<<"not found"<<endl;
	return 0;
}
