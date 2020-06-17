#include<iostream>
#include<algorithm>
using namespace std;

struct area{
    int begin;
    int end;
    bool operator < (const area & b){
        return end < b.end || (end == b.end && begin < b.begin);
    }
} a[10010];

int main(){
    int n;cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i].begin>>a[i].end;
    }
    sort(a, a + n);
    int res = 0;
    int nowt = -1;
    for(int i = 0; i < n; i++){
        if(a[i].begin <= nowt){
            continue;
        }
        res++;
        nowt = a[i].end;
    }
    cout<<res<<endl;
    return 0;
}