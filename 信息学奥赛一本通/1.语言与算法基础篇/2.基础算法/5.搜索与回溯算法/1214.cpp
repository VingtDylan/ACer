#include<iostream>
#include<cstring>
using namespace std;

int res[30];
bool used[30];
bool diag1[30];
bool diag2[30];
const int cnt = 8;
int num;

int ans[100][30];

void store(){
    num++;
    for(int i = 1; i <= cnt; i++){
        for(int j = 1; j <= cnt; j++){
            if(res[j] == i)ans[num][j] = i;
        }
    }
}

void display(int a){
    for(int i = 1; i <= cnt; i++){
        cout<<ans[a][i];
    }
    cout<<endl;
}

void dfs(int count){
    for(int j = 1; j <= cnt; j++) {
        if((!used[j]) && (!diag1[count + j]) && (!diag2[count - j + 7])){
            res[count] = j;
            used[j] = true;
            diag1[count + j] = true;
            diag2[count - j + 7] = true;
            if(count == cnt)store();
            else dfs(count + 1);
            used[j] = false;
            diag1[count + j] = false;
            diag2[count - j + 7] = false;
        }
    }
    return;
}

int main(){
    memset(used,false,sizeof(used));
    memset(diag1,false,sizeof(diag1));
    memset(diag2,false,sizeof(diag2));
    num = 0;
    dfs(1);
    int n;cin>>n;
    int a;
    while(n--){
        cin>>a;
        display(a);
    }
    return 0;
}