#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void mul(vector<int> &a, vector<int> &ret, int b){
    ret.clear();
    int carry = 0;
    for(int i = 0; i < a.size(); i++){
        carry += a[i] * b;
        ret.push_back(carry % 10);
        carry /= 10;
    }
    while (carry){
        ret.push_back(carry % 10);
        carry /= 10;
    }
    a = ret;
}

int main(){
    vector<int> a;
    vector<int> ret;
    int n = 100;
    a.push_back(1);
    for(int i = 1; i <= n; i++){
        mul(a, ret, i);
    }
    cout << accumulate(ret.begin(), ret.end(), 0) << endl;
    return 0;
}