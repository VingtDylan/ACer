#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
	int s1 = a %  2;
	int s2 = b %  2;
	if(s1 && !s2)return true;
	if(!s1 && s2)return false;
	if(s1 && s2)return a > b;
	return a < b;
}

int main(){
	int a[10];
	for(int i = 0; i < 10; i++){
		cin>>a[i];
	}
	sort(a, a + 10 ,cmp);
	for(int i = 0; i < 10; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
    return 0;
}
