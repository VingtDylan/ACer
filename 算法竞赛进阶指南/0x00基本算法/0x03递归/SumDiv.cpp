#include<iostream>

using namespace std;

int a,b;
const int mod = 9901;

int pow(int p, int c){
    p %= mod;
    int res = 1;
    while(c){
        if(c & 1) res = res * p % mod;
        p = p * p % mod;
        c >>= 1;
    }
    return res;
}

int sum(int p, int k){
    if(k == 0)return 1;
    if(k % 2 == 0){
        return (p % mod * sum(p, k - 1) + 1) % mod;
    }else{
        return ((1 + pow(p, k / 2 + 1)) % mod * sum(p, k / 2)) % mod;
    }
}

int main(){
    cin>>a>>b;
    int res = 1;
    for(int i = 2; i <= a; i++){
        int s = 0;
        while(a % i == 0){
            s++;
            a /= i;
        }
        if(s){
            res = res * sum(i, s * b) % mod;
        }
    }
    if(!a) res = 0;
    cout<<res<<endl;
    return 0;
}