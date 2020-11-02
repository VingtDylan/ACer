#include<iostream>
#include<iomanip>
using namespace std;

double db;

int main(){
    double sum = 0.0;
    for(int i = 0; i < 12; i++){
        cin>>db;
        sum += db;
    }
    cout<<fixed<<setprecision(2)<<'$'<<sum / 12.0<<endl;
    return 0;
}
