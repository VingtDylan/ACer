#include<iostream>

using namespace std;

int ans;

void f(int a,int b){
    for(int i = a; i * i <= b; i++){
        if(!(b % i)){
            ans++;
            f(i, b / i);
        }
    }
}

int main(){
    int n;cin>>n;
    int a;
    while(n--){
        cin>>a;
        ans = 1;
        f(2,a);
        cout<<ans<<endl;
    }
    return 0;
}
