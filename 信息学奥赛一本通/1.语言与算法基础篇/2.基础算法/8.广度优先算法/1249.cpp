#include<iostream>

using namespace std;

int n,m;
bool a[129][129];
char c;
int dx[8] = {0,0,1,1,1,-1,-1,-1};
int dy[8] = {1,-1,1,0,-1,1,0,-1};

void DFS(int x,int y){
    a[x][y] = true;
    for(int i = 0; i < 8; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx >= 0 && ty >= 0 && tx < n && ty < m && !a[tx][ty]){
            DFS(tx,ty);
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>c;
            if(c == '.')a[i][j] = true;
            else a[i][j] = false;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!a[i][j]){
                ans++;
                DFS(i,j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}