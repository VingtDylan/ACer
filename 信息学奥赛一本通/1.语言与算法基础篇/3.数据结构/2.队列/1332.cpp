#include<iostream>

using namespace std;

int an,bn;
int m;
int a,b;

int main(){
    cin>>an>>bn;
    cin>>m;
    //an = 4, bn = 6, m = 7;
    a = 1, b = 1;
    while(m--){
        cout<<a<<" "<<b<<endl;
        a = (a % an) + 1;
        b = (b % bn) + 1;
    }
    return 0;
}