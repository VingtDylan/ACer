#include<iostream>

using namespace std;

const int n = 1e5 + 5;
double a[n],b[n],s[n];

int main(){
    int N,F;
    cin>>N>>F;
    for(int i = 1; i <= N; i++)cin>>a[i];
    double eps = 1e-5;
    double l = -1e6, r = 1e6;
    while(r - l > eps){
        double mid = (l + r) / 2;
        for(int i = 1; i <= N; i++)b[i] = a[i] - mid;
        for(int i = 1; i <= N; i++)s[i] = s[i - 1] + b[i];
        double ans = -1e10;
        double minV = 1e10;
        for(int i = F; i <= N; i++){
            minV = min(minV, s[i - F]);
            ans = max(ans, s[i] - minV);
        }
        if(ans >= 0) l = mid;
        else r = mid;
    }
    cout<<int(r * 1000)<<endl;
    return 0;
}