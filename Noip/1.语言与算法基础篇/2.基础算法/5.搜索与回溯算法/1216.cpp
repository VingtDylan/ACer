#include<iostream>
#include<cstring>
using namespace std;

const int N = 30;
bool used[N][N];
int x,y;
char c;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int res;
int sx,sy;

void dfs(int sx,int sy){
    for(int i = 0; i < 4; i++){
        int tx = sx + dx[i];
        int ty = sy + dy[i];
        if(tx >= 0 && tx < x && ty >= 0 && ty < y && !used[tx][ty]){
            used[tx][ty] = true;
            res++;
            dfs(tx,ty);
        }
    }
    return;
}

int main(){
    while(cin>>y>>x){
        if(!y && !x)break;
        memset(used,false,sizeof(used));
        res = 0;
        for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j++){
                cin>>c;
                if(c == '.'){
                    used[i][j] = false;
                }else if(c == '#'){
                    used[i][j] = true;
                }else if(c == '@'){
                    used[i][j] = true;
                    res++;
                    sx = i;
                    sy = j;
                }
            }
        }
        dfs(sx,sy);
        cout<<res<<endl;
    }
    return 0;
}