暴力TLE(废话)
#include<iostream>

using namespace std;

const int maxn = 1e5 + 5;
int n,m;
pair<string,int> a[maxn];

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>a[i].first>>a[i].second;
    }
    int res = 0;
    for(int i = 0; i <= m; i++){
        int c = i;
        for(int j = 0; j < n; j++){
            if(a[j].first[0] == 'O'){
                c |= a[j].second;
            }else if (a[j].first[0] == 'X'){
                c ^= a[j].second;
            }else{
                c &= a[j].second;
            }
        }
        res = max(res, c);
    }
    cout<<res<<endl;
    return 0;
}


#include<iostream>

using namespace std;

const int maxn = 1e5 + 5;
int n,m;
pair<string,int> a[maxn];

bool comp(int x, int i){
    for(int j = 0; j < n; j++){
        if(a[j].first[0] == 'O'){
            x |= a[j].second >> i & 1;
        }else if (a[j].first[0] == 'X'){
            x ^= a[j].second >> i & 1;
        }else{
            x &= a[j].second >> i & 1;
        }
    }
    return x;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin>>a[i].first>>a[i].second;
    }
    int res = 0;
    for(int i = 29; ~i; i--){
        if(m >> i){
            bool x = comp(0, i);
            bool y = comp(1, i);
            if(x >= y) res |= x << i;
            else res |= y << i, m -= 1 << i;
        }else{
            res |= comp(0, i) << i;
        }
    }
    cout<<res<<endl;
    return 0;
}