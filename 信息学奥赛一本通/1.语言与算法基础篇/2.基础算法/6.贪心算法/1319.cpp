#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct people{
    int id;
    int time;
    bool operator < (const people & s){
        return time < s.time;
    }
}p[1010];

int main(){
    int n;cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>p[i].time;
        p[i].id = i;
    }
    sort(p + 1, p + 1 + n);
    long long wait = 0;
    for(int i = 1; i <= n; i++){
        cout<<p[i].id<<" ";
        if(i < n)wait += (n - i) * p[i].time;
    }
    cout<<endl;
    cout<<fixed<<setprecision(2)<<wait * 1.0 / n<<endl;
    return 0;
}