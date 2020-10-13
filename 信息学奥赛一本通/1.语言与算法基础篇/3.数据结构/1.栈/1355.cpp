#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
#include<map>

using namespace std;

char s[256];
int n;
bool flag;

stack<int> stk;
map<char,int> mp;

bool f(char a[]){
    int len = strlen(a);
    while(!stk.empty())stk.pop();
    for(int i = 0; i < len; i++){
        char c = a[i];
        if(mp[c] <= 4){
            if(!stk.empty() && mp[stk.top()] > mp[c])return false;
            else stk.push(c);
        }else{
            if(stk.empty())return false;
            else if(mp[stk.top()] + mp[c] != 9)return false;
            else stk.pop();
        }
    }
    return stk.empty();
}

int main(){
    cin>>n;
    mp['{'] = 1; mp['}'] = 8;
    mp['['] = 2; mp[']'] = 7;
    mp['('] = 3; mp[')'] = 6;
    mp['<'] = 4; mp['>'] = 5;
    while(n--){
        memset(s,'\0',sizeof(s));
        cin>>s;
        flag = f(s);
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}