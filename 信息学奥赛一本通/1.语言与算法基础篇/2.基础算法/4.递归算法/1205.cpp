#include<iostream>
#include<stdio.h>
using namespace std;

void Hanoi(int n,char a, char b, char c){
    //cout会超时
    if(n == 1){
        printf("%c->%d->%c\n",a,n,b);
        return ;
    }
    Hanoi(n - 1, a , c, b);
    printf("%c->%d->%c\n",a,n,b);
    Hanoi(n - 1, c , b, a);
}

int main(){
    int n;
    char a,b,c;
    cin>>n>>a>>b>>c;
    Hanoi(n,a,b,c);
    return 0;
}