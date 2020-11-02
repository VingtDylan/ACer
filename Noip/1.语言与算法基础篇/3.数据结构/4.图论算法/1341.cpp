#include<iostream>

using namespace std;

const int maxn = 1001; //101太小，过不了
int n,m;
int x,y;
int g[maxn][maxn];
int degree[maxn];
int st;
int path[maxn];
int pathlen;

void dfs(int st){
    for(int i = 1; i <= n; i++){
        if(g[st][i] == 1){
            g[st][i] = 0;
            g[i][st] = 0;
            dfs(i);
        }
    }
    path[++pathlen] = st;
}

int main(){
    cin>>n>>m;
    for(int i = 1; i <= m; i++){
        cin>>x>>y;
        g[x][y] = 1, g[y][x] = 1;
        degree[x]++, degree[y]++;
    }
    st = 1;
    for(int i = 1; i <= n; i++){
        if(degree[i] % 2){
            st = i;
        }
    }
    pathlen = 0;
    dfs(st);
    for(int i = 1; i <= pathlen; i++)
        cout<<path[i]<<" ";
    cout<<endl;
    return 0;
}