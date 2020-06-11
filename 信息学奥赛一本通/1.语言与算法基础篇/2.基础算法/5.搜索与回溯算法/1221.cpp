#include<iostream>
#include<algorithm>
using namespace std;

long long a[20];
int n;
long long temp[20];

long long gcd(long long a,long long b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++)cin>>a[i];
    sort(a + 1, a + 1 + n);
    temp[1] = a[1];
    int cnt = 1;
    bool flag = false;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= cnt; j++){
            if(gcd(a[i],temp[j]) == 1){
                temp[j] *= a[i];
                flag = true;
                break;
            }
        }
        if(!flag){
            temp[++cnt] = a[i];
        }
        flag = false;
    }
    cout<<cnt<<endl;
    return 0;
}