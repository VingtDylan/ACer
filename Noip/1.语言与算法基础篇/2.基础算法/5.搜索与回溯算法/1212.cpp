#include<iostream>
#include<cstring>
using namespace std;

int r,s;
char a[30][30];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool b[26];
int res;
int temp;

void dfs(int x,int y){
    for(int i = 0; i < 4; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx >= 1 && tx <= r && ty >= 1 && ty <= s && !b[a[tx][ty] - 'A']){
            b[a[tx][ty] - 'A'] = true;
            temp++;
            if(temp > res)res = temp;
            dfs(tx,ty);
            b[a[tx][ty] - 'A'] = false;
            temp--;
        }
    }
}

int main(){
    cin>>r>>s;
    memset(b,false,sizeof(b));
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= s; j++){
            cin>>a[i][j];
        }
    }
    int sx, sy;
    sx = 1, sy = 1;
    res = 0, temp = 1;
    b[a[sx][sy] - 'A'] = 1;
    dfs(sx, sy);
    cout<<res<<endl;
    return 0;
}