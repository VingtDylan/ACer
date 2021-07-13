#include <iostream>
#include <cstring>

using namespace std;

const int maxn = 100010;
int sum[maxn];

void build(int p){
    int v; cin >> v;
    if(v == -1) return;
    sum[p] += v;
    build(p - 1);
    build(p + 1);
}

bool init(){
    int  v; cin >> v;
    if(v == -1) return false;
    memset(sum, 0, sizeof(sum));
    int pos = maxn / 2;
    sum[pos] = v;
    build(pos - 1);
    build(pos + 1);
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    int t = 0;
    while(init()){
        int ind = 0;
        while(sum[ind] == 0) ind++;
        cout << "Case " << ++t << ":\n" << sum[ind++];
        while(sum[ind] != 0) cout << " " << sum[ind++];
        cout << "\n\n";
    }
    return 0;
}

/*
 5 7 -1 6 -1 -1 3 -1 -1
 8 2 9 -1 -1 6 5 -1 -1 12 -1
 -1 3 7 -1 -1 -1
 -1

 Case  1:
 7  11  3
 Case  2:
 9  7  21  15
 */