#include<iostream>

using namespace std;

int n,m;
int vv,ww,ss;
int v[10001],w[10001],s[10001];
int f[6001];
int len;

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>vv>>ww>>ss;
        int tt = 1;
        while(ss >= tt){
            v[++len] = vv * tt;
            w[len] = ww * tt;
            ss -= tt;
            tt *= 2;
        }
        v[++len] = vv * ss;
        w[len] = ww * ss;
    }
    for(int i = 1; i <= len; i++){
        for(int j = m; j >= v[i]; j--){
            f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    }
    cout<<f[m]<<endl;
    return 0;
}
