#include <iostream>
#include <cstring>

using namespace std;

const int N = 110;
int m, n;
int e[N], ne[N], h[N], idx;
int d[N], q[N];

void add(int a, int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int main(){
    ios::sync_with_stdio(false);
    while(cin >> n >> m){
        //m == 0卡人我特么
        if(m == 0 && n == 0) break;
        idx = 0;
        memset(h, -1, sizeof(h));
        memset(d, 0, sizeof(d));
        for(int i = 0; i < m; i++){
            int a, b;
            cin >> a >> b;
            add(a, b);
            d[b]++;
        }
        int hh = 0, tt = -1;
        for(int i = 1; i <= n; i++){
            if(d[i] == 0) q[++tt] = i;
        }
        while(hh <= tt){
            int p = q[hh++];
            for(int i = h[p]; i != -1; i = ne[i]){
                int j = e[i];
                if(--d[j] == 0) q[++tt] = j;
            }
        }
        for(int i = 0; i < n; i ++) cout << q[i] << " ";
        cout << endl;
    }
    return 0;
}

/*
 5 4
 1 2
 2 3
 1 3
 1 5
 0 0

 1 4 2 5 3
 */