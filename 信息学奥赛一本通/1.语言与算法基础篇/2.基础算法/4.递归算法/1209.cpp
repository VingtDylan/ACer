#include<iostream>
#include<stdio.h>
using namespace std;

int n;
int cnt = 0;
int num1 = 0, num2 = 1;
int a[20], b[20];

int gcd(int a,int b){
    return b == 0 ? a : gcd(b, a % b);
}

void changeVal(){
    num1 = num1 * b[cnt] + num2 * a[cnt];
    num2 *= b[cnt];
    int k = gcd(num1, num2);
    num1 /= k;
    num2 /= k;
}

int main(){
    cin>>n;
    while(n--){
        scanf("%d/%d",&a[cnt],&b[cnt]);
        changeVal();
        cnt++;
    }
    if(num2 == 1)cout<<num1<<endl;
    else cout<<num1<<"/"<<num2<<endl;
    return 0;
}