#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double n,l,c;
double l2;

int main(){
    cin>>l>>n>>c;
    l2 = l * (1 + n * c);
    double left = 0, right = acos(-1.0);
    double mid;
    while(right - left > 1e-12){
        mid = (left + right) / 2.0;
        if(2 * l2 / l > mid / sin(mid / 2.0))left = mid;
        else right = mid;
    }
    cout<<fixed<<setprecision(3)<<l2 / mid * (1 - cos(mid / 2.0))<<endl;
    return 0;
}
