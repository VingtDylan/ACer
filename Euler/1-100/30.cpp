#include <iostream>

using namespace std;

int find(int x){
    int res = 0;
    int t;
    while(x){
        t = x % 10;
        res += (t * t * t * t * t);
        x /= 10;
    }
    return res;
}

int main(){
    int sum = 0;
    for(int i = 2; i <= 4 * 9 * 9 * 9 * 9 * 9; i++){
        if(find(i) == i){
            //cout << i << " ";
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}