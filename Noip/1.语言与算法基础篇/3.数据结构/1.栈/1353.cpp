#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>

using namespace std;

char s[256];
stack<char> stk;

int main(){
    gets(s);
    for(int i = 0; s[i] != '@'; i++){
        switch (s[i]) {
            case '(':stk.push('(');break;
            case ')':{
                if(stk.empty()){
                    cout<<"NO"<<endl;
                    return 0;
                }else{
                    stk.pop();
                }
                break;
            }
            default:break;
        }
    }
    if(stk.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}