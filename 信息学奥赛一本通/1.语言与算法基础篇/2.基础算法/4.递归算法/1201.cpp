#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;cin>>n;
    int f[21];
    memset(f,0,sizeof(f));
    f[1] = 1;
    f[2] = 1;
    int a;
    int index = 3;
    for(int i = 0; i < n; i++){
        cin>>a;
        if(f[a])cout<<f[a]<<endl;
        else{
            while(index <= a){
                f[index] = (f[index - 1] + f[index - 2]);
                index++;
            }
            cout<<f[a]<<endl;
        }
    }
    return 0;
}
