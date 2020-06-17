#include<iostream>
#include<cstring>
using namespace std;

int a,b,c,d,e,f;
int s[10];
int h[4] = {0, 5, 3, 1};

int main(){
    while(cin>>a>>b>>c>>d>>e>>f){
        if(!a && !b && !c && !d && !e && !f)break;
        memset(s,0,sizeof(s));
        int res = 0;
        res += f + e + d + (c + 3) / 4;
        int twos = 5 * d + h[c % 4];
        if(twos < b){
            res += (b - twos + 8) / 9;
        }
        int ones = 36 * res - 25 * e - 16 * d - 9 * c - 4 * b;
        if(ones < a){
            res += (a- ones + 35) / 36;
        }
        cout<<res<<endl;
    }
    return 0;
}