#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int f[1001][2];
	int n;cin>>n;
	f[1][1] = 1;
	f[1][0] = 9;
	for(int i = 2; i <= n; i++){
		int t = 9;
		if(i == n)t = 8;
		f[i][0] = (f[i - 1][0] * t + f[i - 1][1]) % 12345;
		f[i][1] = (f[i - 1][1] * t + f[i - 1][0]) % 12345;
	}
	cout<<f[n][0]<<endl;
    return 0;
}
