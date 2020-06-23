#include<iostream>
#include<iomanip>
using namespace std;

int n,k;
int a[10010];
double b;

bool check(int x){
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans += a[i] / x;
    return ans >= k;
}

int main(){
    cin>>n>>k;
    int left = 0, right = 0;
    for(int i = 0; i < n; i++) {
        cin>>b;
        a[i] = (int)(100 * b + 0.5);
        if(a[i] > right)
            right = a[i];
    }
    right += 1;
    while(right - left > 1){
        int mid = (left + right) / 2;
        if(check(mid))
            left = mid;
        else
            right = mid;
    }
    if(left < 1)cout<<"0.00"<<endl;
    else cout<<fixed<<setprecision(2)<<left / 100.0<<endl;
    return 0;
}
