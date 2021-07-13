#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int,int> PII ;
const int N = 1010;
PII p[N];
int n, a, b;

vector<int> mul(vector<int> a, int b){
    vector<int> c;
    for(int i = 0, t = 0; i < a.size() || t; i++){
        if(i < a.size()) t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}

vector<int> div(vector<int> a, int b){
    vector<int> c;
    for(int i = a.size() - 1, t = 0; i >= 0; i--){
        t = t * 10 + a[i];
        c.push_back(t / b);
        t %= b;
    }
    reverse(c.begin(), c.end());
    while (c.size() > 1 && c.back() == 0) c.pop_back();
    return c;
}

vector<int> max_vec(vector<int> a, vector<int> b){
    if(a.size() > b.size()) return a;
    if(a.size() < b.size()) return b;
    for(int i = a.size() - 1; i >= 0; i--){
        if(a[i] == b[i]) continue;
        if(a[i] > b[i]) return a;
        return b;
    }
    return b;
}

int main(){
    cin >> n;
    for(int i = 0; i <= n; i++) {
        cin >> a >> b;
        p[i] = {a * b, a};
    }
    sort(p + 1, p + n + 1);
    vector<int> prod(1, 1);
    vector<int> res(1, 0);
    for(int i = 0; i <= n; i++){
        if(i) res = max_vec(res, div(prod, p[i].first / p[i].second));
        prod = mul(prod, p[i].second);
    }
    for(int i = res.size() - 1; i >= 0; i--) cout << res[i];
    cout << endl;
    return 0;
}

/*
 3
 2 10
 1 5
 1 7

 17
 */