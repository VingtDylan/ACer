// 1264数据增强一下而已

#include<iostream>

using namespace std;

int n;
int a[1001];
int b[1001];
int c[1001];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)cin>>a[i];
    for(int i = 0; i < n; i++){
        b[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && b[j] + 1 > b[i])
                b[i] = b[j] + 1;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        c[i] = 1;
        for(int j = n - 1; j > i; j--){
            if(a[j] < a[i] && c[j] + 1 > c[i])
                c[i] = c[j] + 1;
        }
    }
    int mx = 0;
    for(int i = 0; i < n; i++)
        mx = max(mx, b[i] + c[i] - 1);
    cout<< mx << endl;
    return 0;
}
