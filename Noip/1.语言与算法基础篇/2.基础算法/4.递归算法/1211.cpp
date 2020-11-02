#include<iostream>
#include<stdio.h>
using namespace std;

int k,x;

bool check(int x){
    if(x == k)return true;
    if((x - 1) % 3 == 0 && (x - 1) % 2 == 0)return (check((x - 1) / 3)) || (check((x - 1) / 2));
    if((x - 1) % 3 == 0)return check((x - 1) / 3);
    if((x - 1) % 2 == 0)return check((x - 1) / 2);
    return false;
}

int main(){
    scanf("%d,%d",&k,&x);
    if(check(x))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}