#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int N = 110;
int a[N][N];
int b[N];
int n;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int res = - 127 * 10010;
    for(int i = 1; i <= n; i++){
        memset(b, 0, sizeof(b));
        for(int j = i; j <= n; j++){
            int sum = 0;
            for(int k = 1; k <= n; k++){
                b[k] += a[j][k];
                sum += b[k];
                if(sum <= b[k]) sum = b[k];
                if(sum >= res) res = sum;
            }
        }
    }
    cout << res << endl;
    return 0;
}
/*
4
0 -2 -7 0 9 2 -6 2
-4 1 -4 1 -1
8 0 -2

15
 */