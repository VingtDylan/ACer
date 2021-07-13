#include <iostream>
#include <cstring>

using namespace std;

const int N = 1010;
int p[N];
int t;
int n, m, u, v;

int find(int x){
    return p[x] == x ? x : p[x] = find(p[x]);
}

int main(){
    cin >> t;
    while (t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++) p[i] = i;
        for(int i = 0; i < m; i++){
            cin >> u >> v;
            int pu = find(u), pv = find(v);
            p[pu] = pv;
        }
        int res = 0;
        for(int i = 1; i <= n; i++) res += p[i] == i;
        cout << res << endl;
    }
    return 0;
}