#include<iostream>
#include<algorithm>
using namespace std;

int n;
struct ac{
    int st;
    int ed;
    bool operator < (const ac &a){
        return ed < a.ed;
    }
}as[1010];

int ans;
int edTime;

int main(){
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>as[i].st>>as[i].ed;
    }
    sort(as + 1, as + 1 + n);
    for(int i = 1; i <= n; i++){
        if(as[i].st >= edTime){
            ans++;
            edTime = as[i].ed;
        }
    }
    cout<<ans<<endl;
    return 0;
}

/*
4
1 3
4 6
2 5
1 7
 */