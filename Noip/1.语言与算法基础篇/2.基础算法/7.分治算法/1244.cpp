#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int a[100010];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)cin>>a[i];
    cin>>m;
    sort(a, a + n);
    int l = 0, r = n - 1;
    bool flag = false;
    while(l < r){
        int sum = a[l] + a[r];
        if(sum == m){
            cout<<a[l]<<" "<<a[r]<<endl;
            flag = true;
            break;
        }else if(sum > m){
            r--;
        }else{
            l++;
        }
    }
    if(!flag)cout<<"No"<<endl;
    return 0;
}
