#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int a[101]={0};
    int n,b;
    int i;
    bool flag=false;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        a[b+50]++;
    }
    for(i=0;i<100;i++){
        if(a[i]>=n/2){
            flag=true;
            cout<<i-50<<endl;
        }
    }
    if(flag==0)
        cout<<"no";
    cout<<endl;
    return 0;
}
