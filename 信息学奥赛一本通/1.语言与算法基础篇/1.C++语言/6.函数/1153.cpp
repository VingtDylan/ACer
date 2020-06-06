#include<iostream>
#include<stdio.h>

using namespace std;

bool judge(int);
int main(){
    for(int i = 10; i <= 99; i++)
        if(judge(i) && judge(i % 10 * 10 + i / 10))
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
