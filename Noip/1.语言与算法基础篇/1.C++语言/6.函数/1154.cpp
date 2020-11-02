#include<iostream>
#include<stdio.h>
using namespace std;

int judge(int);
 
int main(){
    for(int i= 1;i <= 220;i++) {
        if(i==judge(judge(i)) && i!=judge(i)){
            cout<<i<<" "<<judge(i)<<endl;
            break;
        }
    }
    return 0;
}
 
int judge(int n){
    int sum = 0;
    for(int i= 1; i < n /2 + 1; i++)
        if(n% i== 0)
            sum += i;
    return sum;
}
