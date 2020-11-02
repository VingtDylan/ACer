#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
using namespace std;

int k;
int w,s;

struct item{
    int weight;
    int value;
    double v;
    bool operator < (const item & b){
        return v > b.v;
    }
} a[110];

int main(){
    cin>>k;
    while(k--){
        cin>>w>>s;
        for(int i = 0; i < s; i++){
            cin>>a[i].weight>>a[i].value;
            a[i].v = a[i].value * 1.0 / a[i].weight;
        }
        sort(a, a + s);
        double total = 0;
        int in = 0;
        while(w && in < s) {
            if (a[in].weight <= w) {
                total += a[in].value;
                w -= a[in].weight;
                in++;
            } else {
                total += a[in].v * w;
                w = 0;
            }
        }
        cout<<fixed<<setprecision(2)<<total<<endl;
    }
    return 0;
}