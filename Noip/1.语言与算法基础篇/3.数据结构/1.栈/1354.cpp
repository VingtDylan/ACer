#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>

using namespace std;

char s[256];
stack<char> stk;

int main(){
    gets(s);
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        switch (s[i]) {
            case '(':stk.push('(');break;
            case '[':stk.push('[');break;
            case ')':{
                if(stk.empty() || stk.top() != '('){
                    cout<<"Wrong"<<endl;
                    return 0;
                }else{
                    stk.pop();
                }
                break;
            }
            case ']':{
                if(stk.empty() || stk.top() != '['){
                    cout<<"Wrong"<<endl;
                    return 0;
                }else{
                    stk.pop();
                }
                break;
            }
        }
    }
    if(stk.empty())cout<<"OK"<<endl;
    else cout<<"Wrong"<<endl;
    return 0;
}