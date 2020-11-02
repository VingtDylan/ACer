#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;cin>>n;
    int f[1000001];
    memset(f,0,sizeof(f));
    f[1] = 1;
    f[2] = 2;
    int a;
    int index = 3;
    for(int i = 0; i < n; i++){
        cin>>a;
        if(f[a])cout<<f[a]<<endl;
        else{
            while(index <= a){
                f[index] = (2 * f[index - 1] + f[index - 2]) % 32767;
                index++;
            }
            cout<<f[a]<<endl;
        }
    }
    return 0;
}
