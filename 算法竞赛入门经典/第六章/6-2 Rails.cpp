#include <iostream>
#include <stack>

using namespace std;

const int N = 1010;
int a[N];
int n;

int main(){
    ios::sync_with_stdio(false);
    while(scanf("%d", &n), n){
        while(scanf("%d", &a[1]), a[1]) {
            for(int i = 2; i <= n; i++) scanf("%d", &a[i]);
            stack<int> s;
            int ta = 1, ib = 1;
            bool flag = true;
            while(ib <= n){
                if(ta == a[ib]) ta++, ib++;
                else if(!s.empty() && s.top() == a[ib]) s.pop(), ib++;
                else if(ta <= n) s.push(ta++);
                else {
                    flag = false;
                    break;
                }
            }
            if(flag) puts("Yes");
            else puts("No");
        }
        puts("");
    }
    return 0;
}