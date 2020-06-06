#include<iostream>
#include<stdio.h>
using namespace std;

bool judge(int);
bool pa(int);
int main(){
    for(int i = 100; i <= 999; i++)
        if(judge(i) && pa(i))
            cout<<i<<endl;
    return 0;
}
bool judge(int x){
    for(int i = 2; i * i <= x; i++){
    	if(x % i == 0)
    		return false;
	}
    return true;
}
bool pa(int x){
	int a = x / 100;
	int b = x / 10 % 10;
	int c = x % 10;
	if(x == a + b * 10 + c * 100)return true;
	return false;
}
