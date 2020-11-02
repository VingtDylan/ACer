#include<iostream>

using namespace std;

const int maxn = 400;

int tran(int x){
    return x % 2 == 0 ? x - 1 : x;
}

void solve(){
    int used[maxn] = {0};
    int mx = 0;
    int t = 0;cin>>t;
    int *st = new int[t];
    int *ed = new int[t];
    int s,e;
    for(int i = 0; i < t; i++){
        cin>>s>>e;
        st[i] = s >= e ? e : s;
        ed[i] = s < e ? e : s;
        st[i] = tran(st[i]);
        ed[i] = tran(ed[i]);
        for(int j = st[i]; j <= ed[i]; j += 2){
            used[j]++;
            if(mx < used[j]){
                mx = used[j];
            }
        }
    }
    delete[] st;
    delete[] ed;
    mx = (mx <= 0 || mx > t) ? t : mx;
    cout<<mx * 10<<endl;
}

int main() {
    int t;cin>>t;
    for(int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}