#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    double a,pi;
    a = 1 / sqrt(3);
    pi = 6 * (atan(a));
    printf("%.10lf\n",pi);
    return 0;
}

double atan(double x){
    double sum = 0,temp = x;
    int i=1;
    while(fabs(temp/i)>=1e-6){
        sum += temp / i;
        temp=-1 * x * x *temp;
        i +=2;
    }
    return sum;
}
