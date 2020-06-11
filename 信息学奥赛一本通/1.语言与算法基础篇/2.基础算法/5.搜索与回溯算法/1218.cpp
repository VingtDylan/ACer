#include<iostream>

using namespace std;

#define maxx(a,b) ((a) > (b) ? (a) : (b))
#define minn(a,b) ((a) < (b) ? (a) : (b))

int a,b;

//假设石子数目为(a,b)且a >= b,如果[a/b] >= 2则先手必胜,如果[a/b]<2,那么先手只有唯一的一种取法。[a/b]表示a除以b取整后的值。

int main(){
    while(cin>>a>>b){
        if(!a && !b)break;
        int cnt = 0;
        int ta = maxx(a,b);
        int tb = minn(a,b);
        while(ta / tb == 1){
            int c = ta;
            ta = tb;
            tb = c % tb;
            cnt++;
        }
        if(cnt % 2)cout<<"lose"<<endl;
        else cout<<"win"<<endl;
    }
    return 0;
}