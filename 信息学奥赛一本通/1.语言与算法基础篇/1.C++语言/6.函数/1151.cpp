#include<iostream>
#include<stdio.h>
using namespace std;

bool judge(int);
int main(){
    int n;cin>>n;
    int sum=0;
    for(int i = 2; i <= n; i++)
        if(judge(i))
            sum++;
    cout<<sum<<endl;
    return 0;
}
bool judge(int x){
    for(int i = 2; i * i <= x; i++){
    	if(x % i == 0)
    		return false;
	}
    return true;
}
