#include<iostream>
#include <algorithm>

using namespace std;

int n;

struct city{
    int a;
    int b;
    bool operator < (const city & c){
        return a < c.a || (a == c.a && b < c.b);
    }
}cities[5010];

int d[5010];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)cin>>cities[i].a>>cities[i].b;
    sort(cities,cities + n);
    d[0] = cities[0].b;
    int len = 0;
    for(int i = 1; i < n; i++){
        if(cities[i].b >= d[len])d[++len] = cities[i].b;
        else{
            int j = upper_bound(d,d + len + 1, cities[i].b) - d;
            d[j] = cities[i].b;
        }
    }
    cout<<len + 1<<endl;
    return 0;
}
