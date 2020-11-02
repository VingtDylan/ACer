#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int max(int,int,int);
 
int main(){
    int a,b,c;cin>>a>>b>>c;
    double m;
    m = 1.0 * max(a,b,c) / (max(a + b,b,c) * max(a,b,b + c));
    printf("%.3lf\n",m);
    return 0;
}
 
int max(int a,int b,int c){
    int res = a;
    if(res < b)
        res = b;
    if(res < c)
        res = c;
    return res;
}
