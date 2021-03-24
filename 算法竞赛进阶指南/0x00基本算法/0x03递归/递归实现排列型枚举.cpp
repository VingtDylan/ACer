#include<iostream>
#include<vector>
using namespace std;

int n;
vector<int> vec;

void dfs(int x, int s){
    if(x == n){
        for(int i = 0; i < n; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i = 0; i < n; i++){
        if(!(s >> i & 1)){
            vec.push_back(i + 1);
            dfs(x + 1, s | 1 << i);
            vec.pop_back();
        }
    }
}

int main(){
    cin>>n;
    dfs(0,0);
    return 0;
}