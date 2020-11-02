#include<iostream>

using namespace std;

int n;
int dp[1001];

int main() {
    cin>>n;
    if(n == 0){
        cout<<"0"<<endl;
        return 0;
    }
    int a[4];
    a[0] = 10, a[1] = 20, a[2] = 50,a[3] = 100;
    dp[0] = 1;
    for(int i = 0; i <= 3; i++){
        for(int j = a[i]; j <= n; j++){
            dp[j] += dp[j - a[i]];
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}