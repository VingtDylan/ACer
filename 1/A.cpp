#include <iostream>
#include <cstring>

using namespace std;

const int N = 1010;
int p[N];
int n, m;
int a, b, pa, pb;

int find(int x){
    return p[x] == x ? x : p[x] = find(p[x]);
}

int main(){
    while (scanf("%d", &n), n){
        scanf("%d", &m);
        for(int i = 1; i <= n; i++) p[i] = i;
        for(int i = 0; i < m; i++){
            scanf("%d%d",&a, &b);
            pa = find(a), pb = find(b);
            p[pa] = pb;
        }
        int res = 0;
        for(int i = 1; i <= n; i++) res += p[i] == i;
        cout << res - 1 << endl;
    }
    return 0;
}