#include<iostream>
using namespace std;

const int N = 3000;
int n;
int a[N];
int res;

void print(int step){
    res++;
    cout<<n<<"=";
    for(int i = 1; i <= step - 1; i++)
        cout<<a[i]<<"+";
    cout<<a[step]<<endl;
}

void dfs(int sum,int step){
    for(int i = a[step - 1]; i <= sum; i++){
        if(i < n){
            a[step] = i;
            sum -= i;
            if(sum==0)
                print(step);
            else
                dfs(sum,step+1);
            sum += i;
        }
    }
}

int main(){
    cin>>n;
    a[0]=1;
    res = 0;
    dfs(n,1);
    cout<<"total="<<res<<endl;
    return 0;
}