#include<iostream>
#include<algorithm>
using namespace std;

int n;
int b;
int h[20010];

int main(){
    cin>>n>>b;
    for(int i = 0; i < n; i++){
        cin>>h[i];
    }
    sort(h, h + n);
    int sum = 0;
    int i;
    for(i = n - 1; i >= 0; i--){
        sum += h[i];
        if(sum >= b)
            break;
    }
    cout<<n - i<<endl;;
    return 0;
}