#include<iostream>
#include<algorithm>
using namespace std;

int n;
int a[1010];
int d[1010];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)cin>>a[i];
    int mx = 0;
    for(int i = 0; i < n; i++){
        d[i] = a[i];
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && d[j] + a[i] > d[i])
                d[i] = d[j] + a[i];
        }
        mx = max(mx, d[i]);
    }
    cout<<mx<<endl;
    return 0;
}
