/* 无法AC，de不出来草了
#include<iostream>
#include<cstring>
using namespace std;

const int N = 10;
bool used[N][N];
int n,k;
char c;

int a[N];
bool b[N];
int res;

void dfs(int x){
    if(x == k){
        res++;
        return;
    }
    for(int i = a[x]; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(!b[j] && !used[i][j]){
                a[x + 1] = i;
                b[j] = true;
                dfs(x + 1);
                b[j] = false;
            }
        }
    }
    return;
}

int main(){
    while(cin>>n>>k){
        if(n == -1 && k == -1)break;
        memset(b,false,sizeof(b));
        res = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin>>c;
                if(c == '.'){
                    used[i][j] = true;
                }else if(c == '#'){
                    used[i][j] = false;
                }
            }
        }
        if(n > 0 && k  == 0){
            cout<<1<<endl;
            continue;
        }
        a[0] = 1;
        dfs(0);
        cout<<res<<endl;
    }
    return 0;
}
 */

#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

const int N = 10;
int n,k;
char maps[N][N];
bool used[N];
int res;

void dfs(int x,int y){
    if(y == k){
        res++;
        return;
    }

    for(int i = x; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(maps[i][j] == '#' && !used[j]){
                used[j] = true;
                dfs(i + 1,y + 1);
                used[j] = false;
            }
    return;
}

int main(){
    while(scanf("%d%d",&n,&k) != EOF){
        if(n == -1 && k == -1)break;
        memset(used, false, sizeof(used));
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                cin>>maps[i][j];
        res = 0;
        dfs(1,0);
        cout<<res<<endl;
    }
    return 0;
}