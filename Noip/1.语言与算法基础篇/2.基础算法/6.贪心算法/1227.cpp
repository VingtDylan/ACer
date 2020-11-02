#include<iostream>
#include <cmath>

using namespace std;

#define minn(a,b) ((a) < (b) ? (a) : (b))

int n;
int v,t;
int cur;

int main(){
    while(cin>>n && n){
        int res = 0x3f3f3f3f;
        for(int i = 0; i < n; i++){
            cin>>v>>t;
            if(t >= 0) {
                cur = ceil(t + 4.5 / v * 3600);
                res = minn(res, cur);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}