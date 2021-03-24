#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[10];

int main(){
    n = 10;
    for(int i = 0; i < n; i++) a[i] = i;
    int s = 1000000 - 1;
    while(s--){
        next_permutation(a, a + n);
    }
    for(int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}