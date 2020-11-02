#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
int n,m;

int main(){
    cin>>n>>m;
    for(int i = 1; i <= n; i++)q.push(i);
    int cnt = 0;
    while(!q.empty()){
        cnt++;
        int temp = q.front();
        if(cnt == m){
            cout<<temp<<" ";
            cnt = 0;
        }else{
            q.push(temp);
        }
        q.pop();
    }
    cout<<endl;
    return 0;
}