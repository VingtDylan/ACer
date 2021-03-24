#include <iostream>

using namespace std;

int func(int x, int k){
    int res = 0;
    for(int i = 1; i < x; i++){
        if(i % k) continue;
        res += i;
    }
    return res;
}

int main(){
    int n = 1000;
    cout << func(n, 3) + func(n, 5) - func(n, 15) << endl;
    return 0;
}