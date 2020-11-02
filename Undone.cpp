#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

const int maxn = 65536 + 1;
bool visited[maxn];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

typedef pair<int,int> p;

string s;

int bfs(int val){
    memset(visited, false, sizeof(visited));
    queue<p> q;
    q.push((p){val, 0});
    visited[val] = true;
    while(!q.empty()){
        auto t = q.front();q.pop();
        if(t.first == 0 || t.first == 65536)return t.second;


    }
    return -1;
}

int main(){
    int val = 0;
    for(int i = 0; i < 4; i++){
        cin>>s;
        for(int j = 0; j < 4; j++){
            if(s[j] == 'b'){
                val ^= (1 << (15 - (i * 4 + j)));
            }
        }
    }
    int ans = bfs(val);
    if (ans == -1) cout << "Impossible" << endl;
    else cout << ans << endl;
    return 0;
}