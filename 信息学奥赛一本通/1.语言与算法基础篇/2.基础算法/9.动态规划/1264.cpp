#include<iostream>

using namespace std;

int n;
int a[101];
int b[101];
int c[101];

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
    cout<< n - mx << endl;
    return 0;
}
