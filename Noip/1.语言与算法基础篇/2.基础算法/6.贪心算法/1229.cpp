#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

#define max(a,b) ((a) > (b) ? (a) : (b))

int n;
int a[1010];

int main(){
    while(cin>>n){
        memset(a,0,sizeof(a));
        int maxx = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum += a[i];
            maxx = max(maxx,a[i]);
        }
        if(maxx * 2 >= sum){
            cout<<fixed<<setprecision(1)<<sum - maxx<<endl;
        }else{
            cout<<fixed<<setprecision(1)<< (sum)/ 2.0<<endl;
        }
    }
    return 0;
}