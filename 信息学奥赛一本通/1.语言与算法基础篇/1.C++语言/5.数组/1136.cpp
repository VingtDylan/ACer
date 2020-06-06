#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char a[256];gets(a);
    int len=strlen(a);
    for(int i = 0; i < len; i++){
        if(a[i] == 'Z' || a[i] == 'z')
            a[i] -= 25;
        else if(a[i] >= 'A' && a[i]<'Z')
            a[i] += 1;
        else if(a[i] >= 'a' && a[i]<'z')
            a[i] += 1;
    }
    for(int i = 0; i < len; i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
