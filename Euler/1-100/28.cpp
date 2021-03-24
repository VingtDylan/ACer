#include <iostream>

using namespace std;

const int N = 1001 + 1;
int a[N][N];
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};
int dir;

int main(){
    int ed = (N - 1) * (N - 1);
    a[1][N - 1] = ed;
    int sx = 1, sy = N - 1;
    for(int i = ed - 1; i > 0; i--) {
        int tx = sx + dx[dir];
        int ty = sy + dy[dir];
        if(tx > 0 && ty > 0 && tx < N && ty < N && a[tx][ty] == 0){
            a[tx][ty] = i;
            sx = tx;
            sy = ty;
        }else{
            dir = (dir + 1) % 4;
            i++;
        }
    }
//    for(int i = 1; i < N; i++){
//        for(int j = 1; j < N; j++)
//            cout << a[i][j] << " ";
//        cout << endl;
//    }
    int res = 0;
    for(int i = 1; i < N; i++){
        for(int j = 1; j < N;j++){
            if(i == j || i + j == N)
                res += a[i][j];
        }
    }
    cout << res << endl;
    return 0;
}