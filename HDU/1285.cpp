#include <iostream>
#include <cstring>
using namespace std;

const int N = 510;
int n, m;
int d[N];
int a, b;
int e[N], ne[N], h[N], idx;
int q[N * 2];

void add(int a, int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void topsort() {
    int hh = 0, tt = -1;
    for (int i = 1; i <= n; i++) {
        if(d[i] == 0) q[++tt] = i;
    }
    while(hh <= tt) {
        int t = q[hh];
        int s = -1;
        for(int i = hh; i <= tt; i++){
            if(q[i] <= t) s = i;
        }
        swap(q[hh], q[s]);
        t = q[hh++];
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if (--d[j] == 0) q[++tt] = j;
        }
    }
}

int main(){
    memset(h, -1, sizeof(h));
    cin >> n >> m;
    while (m--){
        cin >> a >> b;
        add(a, b);
        d[b]++;
    }
    topsort();
    for(int i = 0; i < n; i++)
        if(i != n - 1)cout << q[i] << " ";
        else cout << q[i];
    return 0;
}