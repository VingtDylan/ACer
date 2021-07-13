#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <vector>
#include <time.h>

using namespace std;

const int N = 1010;
typedef pair<int, int> PII;
unordered_map<string, int> mp;
unordered_map<char, string> seq;
vector<PII> eds;
vector<string> inits;
int m, n;
int f[N][N];
int dx[] = {-1,-1,-1,0,-2}, dy[] = {-1,-1,0,-1,-2};

// 操作
const static string operation[6] = {"copy", "replace", "delete", "insert", "twiddle", "kill"};
// 操作代价
//const static int cost[6] = {1, 1, 1, 1, 1, 1};
//const static int cost[6] = {1, 2, 3, 4, 5, 6};
const static int cost[6] = {0, 2, 10, 5, -10, 1000};
//const static int cost[6] = {2, 2, 2, 2, 2, 1};

// 待求解的字符串
string a = "algorithm", b = "altruistic";
//string a = "al", b = "al";
//string a = "al", b = "la";
//string a = "al", b = "a";
//string a = "algorit", b = "altruistic";
//string a = "algo", b = "alt";
//string a = "algor", b = "altruis";
//string a = "alcd", b = "a";
//string a = "alcd", b = "";
//string a = "", b = "";

clock_t start_t, end_t;

void dfs(PII ed, PII st, string &r, set<string>& s){
    if(ed == st){
        string temp = r;
        reverse(temp.begin(), temp.end());
        s.insert(temp);
        return;
    }
    for(int i = 0; i < 5; i++){
        int x = ed.first, y = ed.second;
        int tx = x + dx[i], ty = y + dy[i];
        if(tx < 0 || ty < 0) continue;
        string op = operation[i];
        r.push_back(op[0]);
        if(f[x][y] == f[tx][ty] + mp[op]){
            if(op == "copy" && a[tx] == b[ty]) dfs({tx, ty}, st, r, s);
            if(op == "replace" && a[tx] != b[ty]) dfs({tx, ty}, st, r, s);
            if(op == "twiddle" && a[tx] == b[ty + 1] && a[tx + 1] == b[ty]) dfs({tx, ty}, st, r, s);
            if(op == "delete") dfs({tx, ty}, st, r, s);
            if(op == "insert") dfs({tx, ty}, st, r, s);
        }
        r.pop_back();
    }
}

void EditDistance(string a, string b){
    m = a.length(), n = b.size();
    //初始化表
    memset(f, 0x3f, sizeof(f));
    //边界值
    for(int i = 0; i <= m; i++) f[i][0] = i * mp["delete"];
    for(int i = 0; i <= n; i++) f[0][i] = i * mp["insert"];
    //线性DP
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            int di = i - 1, dj = j - 1;
            if (a[di] == b[dj]) f[i][j] = min(f[i][j], f[i - 1][j - 1] + mp["copy"]);
            else f[i][j] = min(f[i][j], f[i - 1][j - 1] + mp["replace"]);
            f[i][j] = min(f[i][j], f[i - 1][j] + mp["delete"]);
            f[i][j] = min(f[i][j], f[i][j - 1] + mp["insert"]);
            if (di >= 1 && dj >= 1) {
                if (a[di] == b[dj - 1] && a[di - 1] == b[dj])
                    f[i][j] = min(f[i][j], f[i - 2][j - 2] + mp["twiddle"]);
            }
        }
    }
    //额外的kill操作
    for(int i = 0; i < m; i++) f[m][n] = min(f[m][n], f[i][n] + mp["kill"]);
    //输出表
    cout << "---output f table" << endl;
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    //输出最小代价
    cout << "---output minimal operations cost" << endl;
    cout << f[m][n] << endl;
}

void PrintOperationSeq(){
    cout << "---output operation sequences" << endl;
    //找到所以可行的终止态
    //TODO
    eds.emplace_back(m, n);
    inits.emplace_back("");
    for(int i = 0; i < m; i++)
        if(f[m][n] == f[i][n] + mp["kill"]) {
            eds.emplace_back(i, n);
            inits.emplace_back("k");
        }
    //求解所有操作序列
    PII start = {0, 0};
    set<string> s;
    for(int i = 0; i < eds.size(); i++){
        dfs(eds[i], start, inits[i], s);
    }
    //输出所有操作序列
    for(auto str : s) {
        string h = "";
        for(auto st : str)
            h += seq[st] + " ";
        cout << h << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    for(int i = 0; i < 6; i++) mp[operation[i]] = cost[i];
    for(const auto & i : operation) seq[i[0]] = i;
    start_t = clock();
    //求解编辑距离
    EditDistance(a, b);
    end_t = clock();
    cout << "-----Edit Distance time : " << end_t - start_t << "ms" << endl;
    //输出操作序列
    start_t = clock();
    PrintOperationSeq();
    end_t = clock();
    cout << "-----Print Operations Sequence : " << end_t - start_t << "ms" << endl;
    return 0;
}