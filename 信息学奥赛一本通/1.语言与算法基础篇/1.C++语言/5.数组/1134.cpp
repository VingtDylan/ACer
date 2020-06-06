#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char a[256];gets(a);
    int len=strlen(a);
 
	if(a[0]>='0'&&a[0]<='9'){
        cout<<"no"<<endl;
        return 0;
    }
    for(int i=0; i<len; i++){
        if(!( (a[i]>='0'&&a[i]<='9') || (a[i]>='A'&&a[i]<='Z') || (a[i]>='a'&&a[i]<='z') || a[i]=='_') )
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    return 0;
}
