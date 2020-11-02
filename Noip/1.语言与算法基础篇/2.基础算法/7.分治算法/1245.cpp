#include<iostream>
#include<algorithm>
using namespace std;

int n;
int a[100010];

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)cin>>a[i];
    sort(a, a + n);
    cout<<a[0];
    for(int i = 1; i < n; i++)
        if(a[i] != a[i - 1])
            cout<<" "<<a[i];
    cout<<endl;
    return 0;
}
