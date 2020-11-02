#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char str[255] = {'\0'};
    while(1){
        memset(str,'\0',sizeof(str));
        gets(str);
        if(str[0] == '#' || strlen(str) <= 0)break;
        int len = strlen(str);
        int s = 0;
        for(int i = 0; i < len; i++){
            if(str[i] == ' ')s += (i + 1) * 0;
            else s += (i + 1) * (str[i] - 'A' + 1);
        }
        cout<<s<<endl;
    }
    return 0;
}