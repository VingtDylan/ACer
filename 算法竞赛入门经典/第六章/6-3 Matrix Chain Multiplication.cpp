#include <iostream>
#include <string>
#include <stack>

using namespace std;

struct Matrix{
    int a, b;
    Matrix() {}
    Matrix(int _a, int _b): a(_a), b(_b) {}
} m[26];

int n;

int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    stack<Matrix> s;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        int k = name[0] - 'A';
        cin >> m[k].a >> m[k].b;
    }
    string expr;
    while(cin >> expr){
        int len = expr.length();
        bool err = false;
        int ans = 0;
        for(int i = 0; i < len; i++){
            if(isalpha(expr[i])) s.push(m[expr[i] - 'A']);
            else if(expr[i] == ')'){
                Matrix m2 = s.top(); s.pop();
                Matrix m1 = s.top(); s.pop();
                if(m1.b != m2.a){
                    err = true;
                    break;
                }
                ans += m1.a * m1.b * m2.b;
                s.push(Matrix(m1.a, m2.b));
            }
        }
        if(err) puts("error");
        else printf("%d\n", ans);
    }
    return 0;
}