#include<iostream>
using namespace std;

int main()
{
    int a,b,p;
    cin>>a>>b>>p;
    int res = 1 % p;
    while(b){
        if(b&1)
            res=1ll * res * a % p;
        a = 1ll * a * a %p;
        b>>=1;
    }
    cout<<res<<endl;
    return 0;
}