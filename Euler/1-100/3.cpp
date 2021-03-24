#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i)continue;
        return false;
    }
    return true;
}

int main(){
    long long s = 600851475143;
    for(int i = sqrt(s); i >= 2; i--){
        if(s % i) continue;
        if(!is_prime(i))continue;
        cout << i << endl;
        break;
    }
    return 0;
}