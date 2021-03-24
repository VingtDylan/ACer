#include<iostream>
#include<set>
using namespace std;

const int maxn = 10010;
int height[maxn];

int main(){
    int n,p,h,m;
    cin>>n>>p>>h>>m;
    int a,b;
    set<pair<int,int>> s;
    for(int i = 1; i <= m; i++){
        cin>>a>>b;
        if(a > b)swap(a,b);
        if(!s.count(make_pair(a,b))){
            s.insert(make_pair(a,b));
            height[a + 1]--;
            height[b]++;
        }
    }
    height[1] = h;
    for(int i = 1; i <= n; i++){
        height[i] += height[i - 1];
        cout<<height[i]<<endl;
    }
    return 0;
}