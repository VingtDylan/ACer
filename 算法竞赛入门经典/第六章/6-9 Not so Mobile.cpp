#include <iostream>

using namespace std;

int t, w;

bool solve(int &w){
    int w1, d1, w2, d2;
    cin >> w1 >> d1 >> w2 >> d2;
    bool b1 = true, b2 = true;
    if(!w1) b1 = solve(w1);
    if(!w2) b2 = solve(w2);
    w = w1 + w2;
    return b1 && b2 && (w1 * d1 == w2 * d2);
}

int main(){
    cin >> t;
    while(t--){
        bool flag = solve(w);
        if(flag) puts("YES");
        else puts("NO");
        if(t) puts("");
    }
    return 0;
}

/*
 1
 0 2 0 4
 0 3 0 1
 1 1 1 1
 2 4 4 2
 1 6 3 2
 */