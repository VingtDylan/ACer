#include<iostream>
#include<cstring>
using namespace std;

int t;
string a;
int k;
int len;

int main(){
    cin>>t;
    while(t--){
        cin>>a>>k;
        while(k--){
            len = a.size();
            bool flag = false;
            for(int i = 0; i < len - 1; i++){
                if(a[i] > a[i + 1]){
                    a.erase(i,1);
                    flag = true;
                    break;
                }
            }
            if(!flag)a.erase(len - 1,1);
        }
        cout<<a<<endl;
    }
    return 0;
}