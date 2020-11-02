#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

char a[101];
char res[101];
stack<char> stk;

int main(){
    while(cin>>a){
        int len = strlen(a);
        for(int i = 0; i < len; i++){
            res[i] = ' ';
            if(a[i] == '('){
                stk.push(i);
            }else if(a[i] == ')'){
                if(!stk.empty()){
                    stk.pop();
                }else{
                    res[i] = '?';
                }
            }
        }
        while(!stk.empty()){
            res[stk.top()] = '$';
            stk.pop();
        }
        res[len] = '\0';
        cout<<a<<endl;
        cout<<res<<endl;
    }
    return 0;
}