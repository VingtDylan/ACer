#include <iostream>
#include <cstring>

using namespace std;

const int g[5][5] = {
        {0, -1, 1, 1, -1},
        {1, 0, -1, 1, -1},
        {-1, 1, 0, -1, 1},
        {-1, -1, 1, 0, 1},
        {1, 1, -1, -1, 0}
};
const int N = 210;
int n, a, b;
int A[N], B[N];
int fa, fb;

int main(){
    cin >> n >> a >> b;
    for(int i = 0; i < a; i++) cin >> A[i];
    for(int i = 0; i < b; i++) cin >> B[i];
    int ia = 0, ib = 0;
    while (n--) {
        int res = g[A[ia]][B[ib]];
        ia = (ia + 1) % a;
        ib = (ib + 1) % b;
        if(res == 0) continue;
        else if(res == 1) fa++;
        else fb++;
    }
    cout << fa << " " << fb << endl;
    return 0;
}

/*
10 5 6
0 1 2 3 4
0 3 4 2 1 0

6 2
 */