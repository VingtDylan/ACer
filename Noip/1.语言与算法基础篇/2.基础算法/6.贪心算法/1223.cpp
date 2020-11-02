#include<iostream>

using namespace std;

int count(int x){
    int res = 0;
    while(x){
        if(x & 1)res++;
        x /= 2;
    }
    return res;
}

int f(int x){
    int y = x + 1;
    int k = count(x);
    while(count(y) != k){
        y++;
    }
    return y;
}

int main(){
    int a;
    while(cin>>a && a != 0){
        cout<<f(a)<<endl;
    }
    return 0;
}