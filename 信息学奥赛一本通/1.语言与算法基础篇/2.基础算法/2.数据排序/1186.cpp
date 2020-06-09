#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    int a[101] = {0};
    int n;cin>>n;
	int k;
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin>>k;
        a[k + 50]++;
    }
    for(int i = 0; i < 100; i++){
        if(a[i] >= (n + 1) / 2){
            flag = true;
            cout<<i - 50<<endl;
        }
    }
    if(!flag)
        cout<<"no";
    cout<<endl;
    return 0;
}
