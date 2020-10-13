#include<iostream>
#include<stack>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef long long LL;

char str[251];
stack<LL> S;
int main(){
    gets(str);
    int len = strlen(str) - 1;
    for(int i = 0; i < len; i++){
        switch(str[i]){
            case '+':{
                LL y = S.top(); S.pop();
                LL x = S.top(); S.pop();
                S.push(x + y);
                break;
            }
            case '-':{
                LL y = S.top(); S.pop();
                LL x = S.top(); S.pop();
                S.push(x - y);
                break;
            }
            case '*':{
                LL y = S.top(); S.pop();
                LL x = S.top(); S.pop();
                S.push(x * y);
                break;
            }
            case '/':{
                LL y = S.top(); S.pop();
                LL x = S.top(); S.pop();
                S.push(x / y);
                break;
            }
            case '@':i = len; break;
            default:{
                LL temp = 0;
                while(str[i] != ' ')
                    temp = temp * 10 + str[i] - '0',i++;
                S.push(temp);
                break;
            }
        }
    }
    cout<<S.top()<<endl;
    return 0;
}
