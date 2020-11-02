#include<iostream>

using namespace std;

int n,m;
int x,y;
int a[101];
int root;
int maxx;

int main(){
    cin>>n>>m;
    for(int i = 1; i <= m; i++){
        cin>>x>>y;
        a[y] = x;
    }
    for(int i = 1; i <= n; i++){
        if(a[i] == 0){
            root = i;
            break;
        }
    }
    int sum = 0, maxroot = 0, maxx = -1;
    for(int i = 1; i <= n; i++){
        sum = 0;
        for(int j = 1; j <= n; j++)if(a[j] == i)sum++;
        if(sum > maxx){
            maxx = sum;
            maxroot = i;
        }
    }
    cout<<root<<endl;
    cout<<maxroot<<endl;
    for(int i = 1; i <= n; i++){
        if(a[i] == maxroot){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}