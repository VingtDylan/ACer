#include<iostream>
#include<cstring>
using namespace std;

int ax,ay;
int bx,by;
int dx[12] = {1, 1, 2, 2, -1, -1, -2, -2, 2, 2, -2, -2};
int dy[12] = {2, -2, 1, -1, 2, -2, 1, -1, 2, -2, 2, -2};
int a[101][101];
int queue[10010][4];

int main(){
    memset(a,0xff,sizeof(a));
    cin>>ax>>ay;
    cin>>bx>>by;
    int head = 1, tail = 1;
    queue[1][1] = 1;
    queue[1][2] = 1;
    queue[1][3] = 0;
    while(head <= tail){
        for(int d = 0; d < 12; d++){
            int x = queue[head][1] + dx[d];
            int y = queue[head][2] + dy[d];
            if(x > 0 && y > 0){
                if(a[x][y] == -1){
                    a[x][y] = queue[head][3] + 1;
                    tail++;
                    queue[tail][1] = x;
                    queue[tail][2] = y;
                    queue[tail][3] = a[x][y];
                    if(a[ax][ay] > 0 && a[bx][by] > 0){
                        cout<<a[ax][ay]<<endl;
                        cout<<a[bx][by]<<endl;
                        return 0;
                    }
                }
            }
        }
        head++;
    }
    return 0;
}
