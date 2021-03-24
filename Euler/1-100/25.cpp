#include <iostream>
#include <vector>

using namespace std;

int a, b;
void add(vector<int> &pre, vector<int> &cur, vector<int> &next){
    next.clear();
    int carry = 0;
    for(int i = 0; i < pre.size() || i < cur.size(); i++){
        a = i < pre.size() ? pre[i] : 0;
        b = i < cur.size() ? cur[i] : 0;
        carry += (a + b);
        next.push_back(carry % 10);
        carry /= 10;
    }
    while(carry){
        next.push_back(carry % 10);
        carry /= 10;
    }
}

int main(){
    vector<int> pre;
    vector<int> cur;
    vector<int> next;
    pre.push_back(1);
    cur.push_back(1);
    next.push_back(2);
    int ret = 2;
    int n = 3;
    while(cur.size() < 1000){
        pre.assign(cur.begin(), cur.end());
        cur.assign(next.begin(), next.end());
        add(pre, cur, next);
        ret++;
    }
    cout << ret << endl;
    return 0;
}