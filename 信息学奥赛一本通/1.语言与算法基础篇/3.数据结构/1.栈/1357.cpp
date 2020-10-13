#include<iostream>
#include<stack>
#include<stdio.h>

using namespace std;

stack<int> s;
int n;
int a[1001];

int main(){
    cin>>n;
    //n = 5;
    for(int i = 0; i < n; i++)cin>>a[i];
    //a[0] = 5;a[1] = 4;a[2] = 3;a[3] = 2;a[4] = 1;
    int stk_point = 1;
    int seq_point = 0;
    while (stk_point <= n + 1 && seq_point < n){
        if(s.empty())s.push(stk_point++);
        else if(s.top() != a[seq_point])s.push(stk_point++);
        else{
            s.pop();
            seq_point++;
        }
    }
    if(s.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}