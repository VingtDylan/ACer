#include<iostream>
#include<string.h>
using namespace std;

const int len = 5;
const int inf = 0x3f;

int dx[5] = {-1,0,0,0,1};
int dy[5] = {0,0,-1,1,0};

int n;
char a[len][len];
char g[len][len];

void change(int x, int y){
    for(int i = 0; i < len; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if(tx >= 0 && ty >= 0 && tx < len && ty < len){
            g[tx][ty] ^= 1;
        }
    }
}

void input(){
    for(int i = 0; i < len; i++)
        for(int j = 0; j < len; j++)
            cin>>a[i][j];
}

int solve(){
    int ans = inf;
    for(int i = 0; i < 1 << 5; i++){
        memcpy(g,a,sizeof(a));
        int res = 0;
        for(int j = 0; j < 5; j++){
            if(i >> j & 1){
                res++;
                change(0,j);
            }
        }
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 5; j++){
                if(g[i][j] == '0'){
                    res++;
                    change(i + 1, j);
                }
            }
        }
        bool flag = true;
        for(int i = 0; i < 5; i++){
            if(g[4][i] == '0'){
                flag = false;
                break;
            }
        }
        if(flag) ans = min(res, ans);
    }
    return ans > 6 ? -1 : ans;
}

int main(){
    cin>>n;
    while(n--){
        input();
        cout<<solve()<<endl;
    }
    return 0;
}