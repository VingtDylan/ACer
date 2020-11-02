#include<iostream>
#include<stdio.h>
using namespace std;

bool judge(int);

int main(){
    for(int i = 6; i <= 100 ; i += 2){
    	for(int j = 3; j <= i / 2 ; j+= 2){
    		if(judge(j) && judge(i - j)){
    			cout<<i<<"="<<j<<"+"<<i - j<<endl;
    			break;
			}
		}
	}
}

bool judge(int x){
    for(int i = 2; i * i <= x; i++){
    	if(x % i == 0)
    		return false;
	}
    return true;
}
