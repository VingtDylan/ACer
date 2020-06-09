#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int n,r;
int a[101];
bool used[101];

void dfs(int k){
    for(int i = a[k - 1]; i <= n; i++){
        if(!used[i]){
            a[k] = i;
            used[i] = true;
            if(k == r){
                for(int j = 1; j <= r; j++)cout<<setw(3)<<a[j];
                cout<<endl;
            }else{
                dfs(k + 1);
            }
            used[i] = false;
        }
    }
}

int main(){
    cin>>n>>r;
    memset(used,false,sizeof(used));
    a[0] = 1;
    dfs(1);
    return 0;
}