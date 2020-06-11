#include<iostream>
#include<cstring>
using namespace std;

const int N = 110;
bool used[N][N];
bool flag;
int n,k;
char c;
int ha,la,hb,lb;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void dfs(int x,int y){
    for(int i = 0; i < 4; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx >= 0 && tx < n && ty >= 0 && ty < n && !used[tx][ty]){
            used[tx][ty] = true;
            if(tx == hb && ty == lb){
                cout<<"YES"<<endl;
                flag = true;
                break;
            }else{
                dfs(tx,ty);
            }
        }
    }
    return;
}

int main(){
    cin>>k;
    while(k--){
        memset(used,false,sizeof(used));
        flag = false;
        cin>>n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>c;
                if(c == '#')used[i][j] = true;
            }
        }
        cin>>ha>>la;
        cin>>hb>>lb;
        if(used[ha][la] || used[hb][lb]){
            cout<<"NO"<<endl;
            continue;
        }else{
            dfs(ha,la);
        }
        if(!flag)cout<<"NO"<<endl;
    }
    return 0;
}