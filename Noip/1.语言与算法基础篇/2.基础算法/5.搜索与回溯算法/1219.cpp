#include<iostream>
#include<cstring>
using namespace std;

const int N = 20;

int t;
int n,m,sx,sy;

bool used[N][N];
int res;
int temp;

int d[2] = {1, -1};

void dfs(int x, int y){
    if(temp == n * m - 1){
        res++;
        return;
    }
    used[sx][sy] = true;
    for(int i = 1; i <= 2; i++){
        int j = 3 - i;
        for(int dx = 0; dx < 2; dx++){
            for(int dy = 0; dy < 2; dy++){
                int tx = x + i * d[dx];
                int ty = y + j * d[dy];
                if(tx >= 0 && ty >= 0 && tx < n && ty < m && !used[tx][ty]){
                    used[tx][ty] = true;
                    temp++;
                    dfs(tx,ty);
                    used[tx][ty] = false;
                    temp--;
                }
            }
        }
    }
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>m>>sx>>sy;
        memset(used, false, sizeof(used));
        res = 0;
        temp = 0;
        dfs(sx,sy);
        cout<<res<<endl;
    }
    return 0;
}