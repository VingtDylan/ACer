#include <iostream>

using namespace std;

int main(){
    int maxn = 4000000;
    int pre = 1 , cur = 2, next = 3;
    int res = 0;
    while(cur <= maxn){
        res += cur % 2 ? 0 : cur;
        pre = cur;
        cur = next;
        next = cur + pre;
    }
    cout << res << endl;
    return 0;
}