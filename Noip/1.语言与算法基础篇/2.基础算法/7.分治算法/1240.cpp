#include<iostream>
#include<cmath>
using namespace std;

int n;
int a[100010];
int m;
int k;

int f(){
    int l = 1, r = n;
    while(l < r - 1){
        int mid = (l + r) / 2;
        if(a[mid] > k) r = mid;
        else l = mid;
    }
    if(abs(a[l] - k) <= abs(a[r] - k))
        return a[l];
    else
        return a[r];
}

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++)cin>>a[i];
    cin>>m;
    while(m--){
        cin>>k;
        cout<<f()<<endl;
    }
    return 0;
}
