#include<iostream>

using namespace std;

int n;
int a[200010];

int partition(int left, int right){
    int x = left, y = right;
    int pivot = a[x];
    while (x < y){
        while(x < y && a[y] >= pivot)y--;
        if(x < y){
            a[x] = a[y];
            x++;
        }
        while (x < y && a[x] < pivot)x++;
        if(x < y){
            a[y] = a[x];
            y--;
        }
    }
    a[x] = pivot;
    return x;
}

void quickSort(int left, int right){
    if(left < right){
        int in = partition(left, right);
        quickSort(left, in - 1);
        quickSort(in + 1, right);
    }
}

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++)cin>>a[i];
    quickSort(1, n);
    int cnt = 1;
    while(cnt <= n){
        int s = a[cnt], k = cnt;
        while(s == a[cnt])cnt++;
        cout<<a[cnt - 1]<<" "<<cnt - k<<endl;
    }
    return 0;
}
