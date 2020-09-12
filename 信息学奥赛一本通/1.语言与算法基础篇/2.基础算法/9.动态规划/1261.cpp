#include<iostream>

using namespace std;

#define maxn 101
#define MAX 0x3f3f3f3f

int n;
int a[maxn][maxn];
int dp[maxn];
int path[maxn];

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin>>a[i][j];
    for(int i = 0; i < n; i++)dp[i] = MAX;
    dp[n] = 0;
    for(int i = n - 1; i >= 1; i--){
        for(int x = i + 1; x <= n; x++){
            if(a[i][x] > 0 && dp[x] != MAX && (dp[i] > a[i][x] + dp[x])){
                dp[i] = a[i][x] + dp[x];
                path[i] = x;
            }
        }
    }
    cout<<"minlong="<<dp[1]<<endl;
    int st = 1;
    while(st != 0){
        cout<<st<<' ';
        st = path[st];
    }
    cout<<endl;
    return 0;
}