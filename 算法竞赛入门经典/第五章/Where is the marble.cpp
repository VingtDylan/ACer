#include <iostream>
#include <algorithm>
using namespace std;

const int N = 10010;
int a[N];
int n, q;

int main(){
    ios::sync_with_stdio(false);
    int t = 0, x;
    while (scanf("%d%d", &n, &q) == 2 && n){
        printf("CASE# %d:\n", ++t);
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        sort(a, a + n);
        while(q--){
            scanf("%d", &x);
            int p = lower_bound(a, a + n, x) - a;
            if(a[p] == x) printf("%d found at %d\n", x, p + 1);
            else printf("%d not found\n", x);
        }
    }
    return 0;
}