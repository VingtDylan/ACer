#include<iostream>

using namespace std;

int n;

void dfs(int x, int s){
    if(x == n){
        for(int i = 0; i < n; i++){
            if(s >> i & 1)cout<<i + 1 << " ";
        }
        cout<<endl;
        return;//这里需要return一下(orz)
    }
    dfs(x + 1, s);
    dfs(x + 1, s | 1 << x);
}

int main(){
    cin>>n;
    dfs(0,0);
    return 0;
}