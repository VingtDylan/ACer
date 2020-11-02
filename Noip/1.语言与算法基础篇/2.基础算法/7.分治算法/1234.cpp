#include<iostream>
#include<cstring>
using namespace std;

int k;
//int n;
/*WA
int f(int x){
    if(x == 0)return 1;
    int half = f(x / 2) % 10000;
    int temp = (half * half) % 10000;
    if(x % 2) temp = (temp * 2011) % 10000;
    return temp;
}*/

char a[520];

int main(){
    cin>>k;
    while(k--){
        //cin>>n;
        //cout<<f(n)<<endl;
        cin>>a;
        int len = strlen(a);
        int b = 0, c = 2011;
        for(int i = len - 4; i < len; i++)
            if(i >= 0)
                b = b * 10 + a[i] - '0';
        int i = 1;
        while(i * 2 <= b){
            i *= 2;
            c = (c * c) % 10000;
        }
        for(; i < b; i++)
            c = (c * 2011) % 10000;
        cout<<c<<endl;
    }
    return 0;
}