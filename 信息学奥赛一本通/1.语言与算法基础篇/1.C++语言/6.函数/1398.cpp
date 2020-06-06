#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

double f(int);

int main(){
    int n;cin>>n;
	double res = 0;
	int count;
    while(n--){
    	cin>>count;
    	res += f(count);
	}
	cout<<fixed<<setprecision(1)<<res<<endl;
    return 0;
}

double f(int x){
	if(x <= 70)return 0.1;
	return 0.1 + f(x - 70);
}
