#include<iostream>

using namespace std;

int n,m;

void dfs(int x, int count, int s){
    if(count + n - x < m)return;
    if(count == m){
        for(int i = 0; i < n; i++)
            if(s >> i & 1)cout << i + 1 <<" ";
        cout<<endl;
        return ;
    }
    dfs(x + 1, count + 1, s | 1 << x);
    dfs(x + 1, count, s);
}

int main(){
    cin>>n>>m;
    dfs(0,0,0);
    return 0;
}