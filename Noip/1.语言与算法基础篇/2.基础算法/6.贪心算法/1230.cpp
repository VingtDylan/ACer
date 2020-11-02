#include<iostream>
#include<algorithm>
using namespace std;

int n;

struct Point{
    int x;
    int y;
    bool operator < (const Point & b){
        return x < b.x || (x == b.x && y < b.y);
    }
}a[110];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i].x>>a[i].y;
    }
    sort(a,a + n);
    bool flag = false;
    for(int i = 0; i < n; i++){
        bool exist = false;
        for(int j = i + 1; j < n; j++){
            if(a[j].x >= a[i].x && a[j].y >= a[i].y){
                exist = true;
                break;
            }
        }
        if(exist){
            continue;
        }else{
            if(flag){
                cout<<",("<<a[i].x<<","<<a[i].y<<")";
            }else{
                cout<<"("<<a[i].x<<","<<a[i].y<<")";
                flag = true;
            }
        }
    }
    return 0;
}