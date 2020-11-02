#include<iostream>
#include<cstring>
using namespace std;

int n,m;
int a[10010];
int b[10010];

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    memset(b,0,sizeof(b));
    for(int i = 0; i < n; i++){
        int minn = 1000001;
        int index;
        for(int j = 0; j < m; j++){
            if(b[j] < minn){
                minn = b[j];
                index = j;
            }
        }
        b[index] += a[i];
    }
    int ans = 0;
    for(int i = 0; i < m; i++){
        if(b[i] > ans)
            ans = b[i];
    }
    cout<<ans<<endl;
    return 0;
}