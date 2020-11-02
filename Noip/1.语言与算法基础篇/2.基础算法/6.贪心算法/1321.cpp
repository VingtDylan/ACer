#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;cin>>str;
    int s;cin>>s;
    int len = str.length();
    while(s--){
        bool flag = false;
        for(int i = 0; i < len - 1; i++){
            if(str[i] > str[i + 1]){
                flag = true;
                str.erase(i,1);
                break;
            }
        }
        if(!flag)str.erase(len - 1,1);
        len--;
    }
    while(str[0] == '0')str.erase(0,1);
    if(str.size() == 0)cout<<"0"<<endl;
    else cout<<str<<endl;
    return 0;
}