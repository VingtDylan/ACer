#include<iostream>
#include<iomanip>
using namespace std;

double f(double x){
    return x*x*x*x*x - 15*x*x*x*x + 85*x*x*x - 225*x*x + 274*x - 121;
}

int main(){
    double x1 = 1.5, x2 = 2.4;
    while(x2 - x1 >= 1e-7){
        double mid = (x1 + x2) / 2;
        if(f(mid) > 0)x1 = mid;
        else x2 = mid;
    }
    cout<<fixed<<setprecision(6)<<x1<<endl;
    return 0;
}
