#include <iostream>

using  namespace  std;

const int N = 4000010, mod = 998244353;

int n, m;
int p[N];
int op, u, v;

int find(int x){
    return p[x] == x ? p[x] : p[x] = find(p[x]);
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i = 0; i <= n; i++) p[i] = i;
    int res = 0;
    for(int i = 1; i <= m; i++){
        scanf("%d%d%d",&op, &u, &v);
        u = find(u), v = find(v);
        if(op == 0){
            if(u != v) p[u] = v;
        }
        else if(op == 1){
            if(u != v){
                res = ((res * 2) + 0) % mod;
            }else{
                res = ((res * 2) + 1) % mod;
            }
        }
    }
    printf("%d\n",res);
    return 0;
}