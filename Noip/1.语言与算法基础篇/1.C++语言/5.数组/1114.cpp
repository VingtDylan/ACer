#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n;cin>>n;
	double a[n];
	for(int i = 0; i < n; i++){cin>>a[i];}
	double maxa = a[0],mina = a[0];
	double res = a[0];
	int index1,index2;
	for(int i = 1; i < n; i++){
		res += a[i];
		if(a[i] > maxa){
			maxa = a[i];
			index1 = i;	
		}
		if(a[i] < mina){
			mina = a[i];
			index2 = i;
		}
	}
	res = res - maxa - mina;
	double aver = res / (n - 2);
	cout<<fixed<<setprecision(2);
	cout<<aver<<" ";
	double maxb = 0;
	for(int i = 0; i < n; i++){
		if(i == index1 || i == index2)continue;
		double k = abs(a[i] - aver);
		if(k > maxb)maxb = k;
	}
	cout<<maxb<<endl;
	return 0;
}
