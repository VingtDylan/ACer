#include<iostream>
using namespace std;

int main()
{
    long long a,b,p;
    cin>>a>>b>>p;
    long long res = 0;
    while(b){
        a = a % p;
        if(b & 1)
            res = (res + a) % p;
        a *= 2;
        b >>= 1;
    }
    cout<<res<<endl;
    return 0;
}