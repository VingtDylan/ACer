#include<iostream>

using namespace std;

string s,t;
int s_len, t_len;
int f[1010][1010];

int main(){
    cin>>s;
    cin>>t;
    s_len = s.length();
    t_len = t.length();
    for(int i = 1; i <= s_len; i++){
        for(int j = 1; j <= t_len; j++){
            f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            if(s[i - 1] == t[j - 1])f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
        }
    }
    cout<<f[s_len][t_len]<<endl;
    return 0;
}
