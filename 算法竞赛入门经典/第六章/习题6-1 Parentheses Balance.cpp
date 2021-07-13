#include <iostream>
#include <stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    getchar();
    while (t--){
        stack<char> stk;
        string s;
        getline(cin, s);
        for(auto c : s){
            if(c == '(') stk.push(c);
            if(c == '[') stk.push(c);
            if(c == ')'){
                if(!stk.empty() && stk.top() == '('){
                    stk.pop();
                }else{
                    stk.push(c);
                }
            }
            if(c == ']'){
                if(!stk.empty() && stk.top() == '['){
                    stk.pop();
                }else{
                    stk.push(c);
                }
            }
        }
        if(stk.empty())  puts("Yes");
        else puts("No");
    }
    return 0;
}

/*
 3
 ([])
 (([()])))
 ([()[]()])()

 Yes
 No
 Yes
 */