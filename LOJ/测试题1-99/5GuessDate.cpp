#include<bits/stdc++.h>

using namespace std;

int main(){
	//1 pass 918
	//2 20010911
	/*
	for(long long i = 18750412; i <= 20021231 ;i++){
		long long t1 = i %  911, t2 = i % 910;
		long long res = 1;
		for(long long k = 1; k <= t2; k++){
			res = (res * t1) % 911;
		}
		long long m = i ^ (i % 1248679);
		if(res + m == 20000000){
			cout<<i<<endl;
			break;
		}
	}
	*/
	//3 1,000,000,007
	/*
	const double pi = 3.141592653589793;
	for(long long i = 1000000000 - 10; i <= 1000000000 + 10; i++){
		if(abs(sin(pi * (i + 25) / 32)) <= 1e-8){
			cout<<i<<endl;
			break;
		} 
		 
	}
	*/
	//4 121919171932
	
	//long long x = 121919171932; 1463030063184
	//cout<<x * ((x & -x) + ((x - (x & -x)) & -(x - (x & -x)))) <<endl;

	#define low(x) ((x) & (-x)) 
	#define n 1463030063184
	int m = log2(n);
	long long lowx, lowy, t, x, tlowx, tlowy, s;
	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= m; j++){
			lowx = 2 << i;
			lowy = 2 << j;
			t = lowx + lowy;
			if(n % t)continue;
			x = n / t;
			tlowx = low(x);
			if(tlowx != lowx) continue;
			tlowy = low((x - tlowx));
			if(tlowy != lowy) continue;
			s = x * (tlowx + tlowy);
			if(s == n){
				cout<<x<<endl;
				break;
			}
		}
	}

	/*TLE
	int end = sqrt(1463030063184); 
	for(long long  i = 1463030063184; i >= end ; i--){
		if(i % 4 || 1463030063184 % i )continue;
		cout<<i<<endl;
		long long  lowx = low(i);
		long long  lowxx = low((i - lowx));
		long long  s = i * (lowx + lowxx);
		if(s == 1463030063184){
			cout<<i<<endl;
			break;
		}
	}
	*/
	
	//5 1
	return 0;
}
