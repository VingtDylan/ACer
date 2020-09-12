#include<iostream>

using namespace std;

int n;
int a[210];
int b[210];
int c[210];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        b[i] = 1;
        c[i] = 0;
    }
    for(int i = n - 1; i >= 0; i--){
        int l = 0, k = 0;
        for(int j = i + 1; j < n; j++){
            if((a[j] >= a[i]) && (b[j] > l)){
                l = b[j];
                k = j;
            }
        }
        if(l > 0){
            b[i] = l + 1;
            c[i] = k;
        }
    }
    int k = 0;
    for(int i = 0; i < n; i++){
        if(b[i] > b[k])k = i;
    }
    int maxx = b[k];
    cout<<"max="<<maxx<<endl;
    while(maxx--){
        cout<<a[k]<<" ";
        k = c[k];
    }
    return 0;
}
