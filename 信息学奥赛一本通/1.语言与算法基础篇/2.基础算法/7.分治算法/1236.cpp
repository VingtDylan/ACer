#include<iostream>
#include<algorithm>
using namespace std;

int n;

struct area{
    int left;
    int right;
    bool operator < (const area &b){
        return left < b.left || (left == b.left && right < b.right);
    }
}a[50010];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i].left>>a[i].right;
    }
    sort(a, a +  n);
    bool flag = true;
    int left = a[0].left;
    int right = a[0].right;
    for(int i = 1; i < n; i++){
        if(a[i].left <= right){
            right = max(a[i].right,right);
        }else{
            flag = false;
            break;
        }
    }
    if(flag)cout<<a[0].left<<" "<<right;
    else cout<<"no"<<endl;
    return 0;
}
