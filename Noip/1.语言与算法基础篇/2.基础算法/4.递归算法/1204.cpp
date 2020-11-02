#include<iostream>

using namespace std;

int main(){
    int f[31] = {0};
    f[1] = 1;
    f[2] = 2;
    int index = 3;
    int a;
    while(cin >> a){
        while(index <= a){
            f[index] = (f[index - 1] + f[index - 2]);
            index++;
        }
        cout<<f[a]<<endl;
    }
    return 0;
}