#include<iostream>
#include<cstring>
using namespace std;

bool a[101][101][101];
int l,r,c;
char ch;
int sx,sy,sz;
int ex,ey,ez;

int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

struct node{
    int x;
    int y;
    int z;
    int step;
}q[1000010];

void BFS(int x,int y,int z){
    int head = 1, tail = 1;
    bool flag = false;
    q[head].x = x;
    q[head].y = y;
    q[head].z = z;
    q[head].step = 0;
    while(head <= tail){
        int tx = q[head].x;
        int ty = q[head].y;
        int tz = q[head].z;
        int step = q[head].step;
        if(tx == ex && ty == ey && tz == ez){
            flag = true;
            cout<<"Escaped in "<<step<<" minute(s)."<<endl;
            break;
        }
        for(int i = 0; i < 6; i++){
            int nx = tx + dx[i];
            int ny = ty + dy[i];
            int nz = tz + dz[i];
            if(nx >= 0 && nx < l && ny >= 0 && ny < r && nz >= 0 && nz < c && !a[nx][ny][nz]){
                a[nx][ny][nz] = true;
                tail++;
                q[tail].x = nx;
                q[tail].y = ny;
                q[tail].z = nz;
                q[tail].step = step + 1;
            }
        }
        head++;
    }
    if(!flag)cout<<"Trapped!"<<endl;
}

int main(){
    while(cin>>l>>r>>c){
        memset(a,false,sizeof(a));
        if(!l && !r && !c)break;
        for(int i = 0; i < l; i++){
            for(int j = 0; j < r; j++){
                for(int k = 0; k < c; k++){
                    cin>>ch;
                    if(ch == 'S'){
                        sx = i;
                        sy = j;
                        sz = k;
                        a[i][j][k] = true;
                    }else if(ch == 'E'){
                        ex = i;
                        ey = j;
                        ez = k;
                        a[i][j][k] = false;
                    }else if(ch == '.'){
                        a[i][j][k] = false;
                    }else if(ch == '#'){
                        a[i][j][k] = true;
                    }
                }
            }
        }
        BFS(sx,sy,sz);
    }
    return 0;
}
