#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int h;cin>>h;
	double ans1 = -h;
	double ans2 = h;
	for(int i = 0; i < 10; i++){
		ans1 += 2 * ans2;
		ans2 /= 2.0;
	}
	cout<<ans1<<endl;
	cout<<ans2<<endl;
	return 0;
}
