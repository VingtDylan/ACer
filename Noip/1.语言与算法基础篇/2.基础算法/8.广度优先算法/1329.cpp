#include<iostream>

using namespace std;

int n,m;
bool a[110][110];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char s[110];

void dfs(int x,int y){
    a[x][y] = true;
    for(int i = 0; i < 4; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx >= 0 && ty >= 0 && tx < n && ty < m && !a[tx][ty]){
            dfs(tx,ty);
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>s;
        for(int j = 0; j < m; j++){
            if(s[j] == '0'){
                a[i][j] = true;
            }else{
                a[i][j] = false;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!a[i][j]){
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
