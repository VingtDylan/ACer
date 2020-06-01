#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b;
	int res = 0,sum = 0;
	int n;cin>>n;
	while(n--){
		cin>>a>>b;
		if(a>=90&&a<=140&&b>=60&&b<=90){
			sum++;
			if(sum > res)
				res = sum;
		}else{
			sum = 0;
		}
	} 
	cout<<res<<endl;
	return 0;
}
