#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const int N = 210;
struct block{
    int x;
    int y;
    int z;
}b[N];
int n, x, y, z, cnt;
int dp[N];
int k;

void init(int idx, int x, int y, int z){
    b[idx].x = x;
    b[idx].y = y;
    b[idx].z = z;
}

int main(){
    k = 0;
    while (cin >> n, n){
        cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> x >> y >> z;
            init(++cnt, x, y, z);
            init(++cnt, x, z, y);
            init(++cnt, y, x, z);
            init(++cnt, y, z, x);
            init(++cnt, z, x, y);
            init(++cnt, z, y, x);
        }
        sort(b + 1, b + cnt + 1, [&](block A, block B){
            return A.x > B.x;
        });
        for(int i = 1; i <= cnt; i++) dp[i] = b[i].z;
        int res = 0;
        for(int i = 1; i <= cnt; i++){
            int mx = 0;
            for(int j = 1; j < i; j++){
                if(b[j].x > b[i].x && b[j].y > b[i].y && mx < dp[j])
                    mx = dp[j];
            }
            dp[i] += mx;
            if(res < dp[i]) res = dp[i];
        }
        printf("Case %d: maximum height = %d\n", ++k, res);

    }
    return 0;
}
/*
1
10 20 30
2
6 8 10
5 5 5
7
1 1 1
2 2 2
3 3 3
4 4 4
5 5 5
6 6 6
7 7 7
5
31 41 59
26 53 58
97 93 23
84 62 64
33 83 27
0


Case 1: maximum height = 40
Case 2: maximum height = 21
Case 3: maximum height = 28
Case 4: maximum height = 342
 */