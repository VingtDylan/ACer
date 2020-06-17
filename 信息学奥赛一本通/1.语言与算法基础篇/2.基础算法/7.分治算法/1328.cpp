#include<iostream>

using namespace std;

int n;
int a[10010];
int b[10010];
int ans;

void merge(int left,int right){
    if(left == right)return;
    int mid = (left + right) >> 1;
    merge(left, mid);
    merge(mid + 1, right);
    int i1 = left;
    int i2 = mid + 1;
    int index = left;
    while(i1 <= mid && i2 <= right){
        if(a[i1] > a[i2]){
            b[index++] = a[i2++];
            ans += mid + 1 - i1;
        }else{
            b[index++] = a[i1++];
        }
    }
    while(i1 <= mid)b[index++] = a[i1++];
    while(i2 <= right)b[index++] = a[i2++];
    for(int i = left; i <= right; i++){
        a[i] = b[i];
    }
}

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++)cin>>a[i];
    merge(1,n);
    cout<<ans<<endl;
    return 0;
}