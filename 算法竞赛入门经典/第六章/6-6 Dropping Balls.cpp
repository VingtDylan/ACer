/*TLE
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int N = 20;
int a[1 << 20];
int t;
int n, l;

int main(){
    ios::sync_with_stdio(false);
    scanf("%d", &t);
    while(t--){
        memset(a, 0, sizeof(a));
        scanf("%d%d",&n, &l);
        int k, m = (1 << n) - 1;
        for(int i = 0; i < l; i++){
            k = 1;
            for(;;){
                a[k] = !a[k];
                k = a[k] ? k * 2 : k * 2 + 1;
                if(k > m) break;
            }
        }
        printf("%d\n", k / 2);
    }
    scanf("-1");
    return 0;
}
 */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int t, n, l;

int main(){
    ios::sync_with_stdio(false);
    scanf("%d", &t);
    while(t--){
        scanf("%d%d",&n, &l);
        int k = 1;
        for(int i = 0; i < n - 1; i++){
            if(l % 2){
                k = k * 2;
                l = (l + 1) / 2;
            }else{
                k = k * 2 + 1;
                l = l / 2;
            }
        }
        printf("%d\n", k);
    }
    scanf("-1");
    return 0;
}