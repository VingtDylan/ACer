#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int c = 7;
	int res = 1;
	while(b){
		if(b&1){
			res = res * a % c;
		}
		b >>= 1;
		a = a * a % c;
	}
	switch(res){
		case 1:cout<<"Monday"<<endl;break;
		case 2:cout<<"Tuesday"<<endl;break;
		case 3:cout<<"Wednesday"<<endl;break;
		case 4:cout<<"Thursday"<<endl;break;
		case 5:cout<<"Friday"<<endl;break;
		case 6:cout<<"Saturday "<<endl;break;
		case 0:cout<<"Sunday"<<endl;break;
	}
	return 0;
}
