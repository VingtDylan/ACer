#include<iostream>
#include<stdio.h>
using namespace std;

int judge(int);
int main(){
    int n;cin>>n;
    for(int i=2; i<=n; i++)
        if(judge(i) == i)
            cout<<i<<endl;
    return 0;
}

int judge(int x){
    int i;
    int sum = 0;
    for(int i = 1 ; i <= x-1; i++) 
        if(x%i == 0)
            sum += i;
    return sum;
}
