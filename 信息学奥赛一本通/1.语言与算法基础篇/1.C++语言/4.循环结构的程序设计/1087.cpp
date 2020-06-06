#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int k;cin>>k;
	double s = 0;
	int i = 1;
	while(s <= k){
		s += 1.0 / i++;
	}
	cout<<--i<<endl;
	return 0;
}
