#include <iostream>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;
int p[N];
bool used[N];
int a, b, mx;
bool flag;

int find(int x){
    return p[x] == x ? x : p[x] = find(p[x]);
}

void unit(int x, int y){
    mx = max(mx,max(a, b));
    used[x] = true;
    used[y] = true;
    int pa = find(x);
    int pb = find(y);
    if(pa != pb) p[pa] = pb;
    else flag = false;
}

int main(){
    while(cin >> a >> b, a !=- 1 || b != -1){
        if(a == 0 && b == 0){
            cout << "Yes" << endl;
            continue;
        }
        for(int i = 0; i < N; i++) p[i] = i, used[i] = false;
        mx = 0;
        flag = true;
        unit(a, b);
        while(cin >> a >> b, a || b) unit(a, b);
        if(!flag){
            cout << "No" << endl;
        }else{
            int res = 0;
            for(int i = 0; i <= mx; i++) res += used[i] && p[i] == i;
            if(res == 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}