#include<iostream>

using namespace std;

int m,n;
int a[110][110];
bool b[110][110];

int count;
int maxArea;
int tempArea;

int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
int dir[4] = {1,2,4,8};

void DFS(int x,int y){
    b[x][y] = true;
    tempArea+=1;
    for(int i = 0; i < 4; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx >= 0 && ty >= 0 && tx < m && ty < n && !b[tx][ty]){
            if(!(a[x][y] & dir[i]) && !(a[tx][ty] & dir[(i + 2) % 4]))
                DFS(tx,ty);
        }
    }
}

int main(){
    cin>>m>>n;
    count = 0;
    maxArea = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
            b[i][j] = false;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!b[i][j]){
                count++;
                tempArea = 0;
                DFS(i,j);
                maxArea = max(maxArea,tempArea);
            }
        }
    }
    cout<<count<<endl;
    cout<<maxArea<<endl;
    return 0;
}