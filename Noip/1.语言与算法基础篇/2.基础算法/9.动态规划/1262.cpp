#include<iostream>

using namespace std;

#define maxn 201

int n;
int w[maxn];
bool a[maxn][maxn];
int dp[maxn];
int path[maxn];

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++)cin>>w[i];
    int x,y;
    while (cin>>x>>y && x && y){
        a[x][y] = true;
    }
    dp[n] = w[n];
    int mx,p;
    for(int i = n - 1; i >= 1; i--){
        mx = 0;
        p = 0;
        for(int j = i + 1; j <= n; j++){
            if(a[i][j] && dp[j] > mx){
                mx = dp[j];
                p = j;
            }
        }
        dp[i] = mx + w[i];
        path[i] = p;
    }
    int maxx = dp[1];
    p = 1;
    for(int j = 1; j <= n; j++){
        if(dp[j] > maxx){
            p = j;
            maxx = dp[j];
        }
    }
    cout<<p;
    while (path[p] != 0){
        cout<<"-"<<path[p];
        p = path[p];
    }
    cout<<endl;
    cout<<maxx<<endl;
    return 0;
}