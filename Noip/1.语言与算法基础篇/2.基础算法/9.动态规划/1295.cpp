#include<iostream>

using namespace std;

int v,n;
int a[31];
int dp[20010];

int main() {
    cin>>v;
    cin>>n;
    for(int i = 0; i < n; i++)cin>>a[i];
    for(int i = 0; i < n; i++){
        for(int j = v; j >= a[i]; j--){
            dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
        }
    }
    cout<<v - dp[v]<<endl;
    return 0;
}