/*
 #include <iostream>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;

const int MAX_N = 65535 + 5;
bool vis[MAX_N];
int state[16];
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};

void init() {//枚举每一种状态
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j) {
            int val = 1 << (15 - (i * 4 + j));
            for (int d = 0; d < 4; ++d) {
                int x = i + dir[d][0];
                int y = j + dir[d][1];
                if (x < 0 || y < 0 || x >= 4 || y >= 4)
                    continue;
                val ^= (1 << (15 - (x * 4 + y)));
            }
            state[i * 4 + j] = val;
        }
}

typedef pair<int, int> p;

int bfs(int val) {
    memset(vis, 0, sizeof(vis));
    queue<p> que;
    que.push((p){val, 0});//first表示当前状态值，second表示当前走的步数
    vis[val] = true;
    while (!que.empty()) {
        p k = que.front();
        que.pop();
        if (k.first == 0 || k.first == 65535) return k.second;
        for (int i = 0; i < 16; ++i) {
            p next;
            next.first = k.first ^ state[i];
            next.second = k.second + 1;
            if (!vis[next.first]) {
                que.push(next);
                vis[next.first] = true;
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    int val = 0;
    for (int i = 0; i < 4; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < 4; ++j) {
            if (s[j] == 'b')
                val ^= (1 << (15 - (i * 4 + j)));
        }
    }
    int ans = bfs(val);
    if (ans == -1) cout << "Impossible" << endl;
    else cout << ans << endl;
    return 0;
}
 */

