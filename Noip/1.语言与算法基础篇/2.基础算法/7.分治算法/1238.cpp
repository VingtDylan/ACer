#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double a,b,c,d;

double f(double x){
    return fabs(a * x * x * x + b * x * x + c * x + d);
}
s
int main(){
    cin>>a>>b>>c>>d;
    for(double x = -100; x <= 100; x += 0.01){
        if(f(x) <= 1e-6){
            cout<<fixed<<setprecision(2)<<x<<" ";
        }
    }
    return 0;
}
