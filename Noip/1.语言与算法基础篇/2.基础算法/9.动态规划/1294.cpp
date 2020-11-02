#include<iostream>

using namespace std;

int n,m;
int w[3510];
int c[3510];
int dp[13000];

int main() {
    cin>>n>>m;
    for(int i = 0; i < n; i++)cin>>w[i]>>c[i];
    for(int i = 0; i < n; i++){
        for(int j = m; j >= w[i]; j--){
            dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}