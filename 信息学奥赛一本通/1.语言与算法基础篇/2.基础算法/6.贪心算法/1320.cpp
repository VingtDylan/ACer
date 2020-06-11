#include<iostream>

using namespace std;

int a[110];

int main(){
    int n;cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        cin>>a[i];
        sum += a[i];
    }
    int average = sum / n;
    int res = 0;
    int l = 1, r = n;
    while(l < r){
        while(a[l] == average)l++;
        if(l < r){
            a[l + 1] += a[l] - average;
            a[l] = average;
            res++;
        }
        while(l <= r && a[l] == average)l++;
    }
    cout<<res<<endl;
    return 0;
}