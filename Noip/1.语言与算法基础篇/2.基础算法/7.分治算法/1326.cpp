#include<iostream>

using namespace std;

int f(int b,int p,int k){
    if(p == 0)return 1;
    int tf = f(b,p / 2,k) % k;
    tf = (tf * tf) % k;
    if(p % 2)tf = (tf * b) % k;
    return tf;
}

int main(){
    int b,p,k;
    cin>>b>>p>>k;
    int tb = b % k;//!!!
    cout<<b<<"^"<<p<<" mod "<<k<<"="<<f(tb,p,k);
    return 0;
}