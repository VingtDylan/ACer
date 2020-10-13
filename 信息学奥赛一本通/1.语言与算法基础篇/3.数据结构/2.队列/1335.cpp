#include<iostream>
#include<queue>
using namespace std;

int n,m;
bool a[110][110];
int t;
int ans;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int tx,ty;

typedef pair<int,int> p;
queue<p> q;

void bfs(int x,int y){
    p pp = make_pair(x,y);
    q.push(pp);
    while(!q.empty()){
        p tp = q.front();
        int px = tp.first;
        int py = tp.second;
        for(int i = 0; i < 4; i++){
            tx = px + dx[i];
            ty = py + dy[i];
            if(tx >= 1 && tx <=n && ty >= 1 && ty <= m && !a[tx][ty]){
                q.push(make_pair(tx,ty));
            }
        }
        a[px][py] = true;
        q.pop();
    }
}

int main(){
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>t;
            if(t == 0)a[i][j] = true;
            else a[i][j] = false;
        }
    }
    ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!a[i][j]){
                ans++;
                bfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}