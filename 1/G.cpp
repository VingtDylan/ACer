#include <iostream>
#include <cstring>

using namespace std;

const int N = 2e5 + 10;
int p[N];
int d[N];
int n, m;
int x, y, z;

int find(int x){
    if(p[x] != x){
        int t = find(p[x]);
        d[x] += d[p[x]];
        p[x] = t;
    }
    return p[x];
}

int main(){
    while (cin >> n >> m){
        for(int i = 0; i <= n; i++) p[i] = i;
        memset(d, 0, sizeof(d));
        int res = 0;
        for(int i = 0; i < m; i++){
            cin >> x >> y >> z;
            x--;
            int pa = find(x), pb = find(y);
            if(pa == pb){
                if(d[y] - d[x] != z) res++;
            }else{
                p[pa] = pb;
                d[pa] = d[y] - d[x] - z;
            }
        }
        cout << res << endl;
    }
    return 0;
}