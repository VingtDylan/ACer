#include<iostream>
#include <algorithm>

using namespace std;

int n;
int a[1010];
int d[1010];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int len = 0;
    d[len] = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > d[len])d[++len] = a[i];
        else{
            int j = lower_bound(d, d + len + 1, a[i]) - d;
            d[j] = a[i];
        }
    }
    cout<<len + 1<<endl;
    return 0;
}