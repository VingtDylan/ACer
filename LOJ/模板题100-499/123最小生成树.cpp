/*
 #include <iostream>
#include <cstring>

using  namespace  std;

const int N = 2010;
int n, m;
int u, v, w;
int dist[N];
int g[N][N];
bool st[N];

int prim(){
    memset(dist,0x3f, sizeof dist);
    int ret = 0;
    for(int i = 0; i < n; i++){
        int t = -1;
        for(int j = 1; j <= n; j++){
            if(!st[j] && (t == -1 || dist[t] > dist[j]))
                t = j;
        }
        if(i) ret += dist[t];
        st[t] = true;
        for(int j = 1; j <= n; j++){
            dist[j] = std::min(dist[j], g[t][j]);
        }
    }
    return ret;
}

int main(){
    scanf("%d%d",&n, &m);
    memset(g, 0x3f, sizeof g);
    for(int i = 1; i <= m; i++){
        scanf("%d%d%d",&u, &v, &w);
        g[u][v] = g[v][u] = std::min(g[u][v], w);
    }
    printf("%d", prim());
    return 0;
}
 */

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 500010;
int p[N];
int n, m;

struct Edge {
    int a;
    int b;
    int w;
    bool operator <(const Edge &e) {
        return w < e.w;
    }
} edges[N];

int find(int x) {
    return p[x] == x ? p[x] : p[x] = find(p[x]);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        p[i] = i;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }
    sort(edges, edges + m);
    long long res = 0;
    for (int i = 0; i < m; i++) {
        int u = edges[i].a, v = edges[i].b, w = edges[i].w;
        u = find(u), v = find(v);
        if (find(u) != find(v)) {
            p[u] = v;
            res += w;
        }
    }
    cout << res << endl;
    return 0;
}