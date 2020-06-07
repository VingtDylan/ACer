#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<iomanip>
using namespace std;

struct peo{
	char gender[10];
	double h;
	bool operator < (const peo s){
		if(strcmp(gender,s.gender) < 0){
			return false;
		}
		if(strcmp(gender,s.gender) > 0){
			return true;
		}
		if(strcmp(gender,"male") == 0)
			return s.h > h;
		else
			return s.h < h;
	}
}a[40];

int main(){
	int n;cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i].gender>>a[i].h;
	}
	sort(a, a + n);
	cout<<fixed<<setprecision(2);
	for(int i = 0; i < n; i++){
		cout<<a[i].h<<" ";
	}
    return 0;
}
