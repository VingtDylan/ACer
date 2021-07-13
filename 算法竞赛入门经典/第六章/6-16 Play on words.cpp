//TODO

#include <iostream>
#include <cstring>

using namespace std;

const int N = 1010;
int t, n;
string a[N];
int ind[N], outd[N];
bool g[N][N];
bool st[N];

bool dfs(int x){
    st[x] = true;
    for(int j = x + 1; j <= n; j++){
        if(g[x][j] && !st[j]){
            dfs(j);
        }
    }
    for(int i = 1; i <= n; i++) if(!st[i]) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        memset(ind, 0, sizeof(ind));
        memset(outd, 0, sizeof(outd));
        memset(g, false, sizeof(g));
        memset(st, false, sizeof(st));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i].back() == a[j].front()){
                    g[i][j] = true;
                    ind[j]++;
                    outd[i]++;
                }
            }
        }
        int s[2] = {1, 1};
        int cnt = 0;
        bool flag = true;
        for(int i = 1; i <= n; i++){
            if(ind[i] + outd[i] % 2){
                if(cnt >= 2){
                    flag = false;
                    break;
                }else{
                    s[cnt++] = i;
                }
            }
        }
        if(flag) flag = dfs(1);
        if(!flag) cout << "The door cannot be opened." << endl;
        else cout << "Ordering is possible." << endl;
    }
    return 0;
}

/*
 3
 2
 acm
 ibm
 3
 acm
 malform
 mouse
 2
 ok
 ok

 The door cannot be opened.
 Ordering is possible.
 The door cannot be opened.
 */