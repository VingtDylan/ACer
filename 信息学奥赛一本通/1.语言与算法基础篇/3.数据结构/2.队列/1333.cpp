#include<iostream>
#include<string.h>
using namespace std;

int a,n;
int s[1000001];
int head1,head2,tail;
int x,y;

int main(){
    while(cin>>a>>n){
        memset(s,0,sizeof(s));
        s[0] = a;
        head1 = 0, head2 = 0, tail = 0;
        while(tail < n){
            x = s[head1] * 2 + 1;
            y = s[head2] * 3 + 1;
            if(x < y){
                s[++tail] = x;
                head1++;
            }else if(x > y){
                s[++tail] = y;
                head2++;
            }else{
                s[++tail] = x;
                head1++;
                head2++;
            }
        }
        cout<<s[n - 1]<<endl;
    }
    return 0;
}