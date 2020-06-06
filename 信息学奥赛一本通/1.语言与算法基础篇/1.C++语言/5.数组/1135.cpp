#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    char a[256];gets(a);
    int len=strlen(a);
    for(int i=0; i<len; i++){
        if(a[i]=='A')	cout<<"T";
        if(a[i]=='T')	cout<<"A";
        if(a[i]=='G')	cout<<"C";
        if(a[i]=='C')	cout<<"G";
    }
    cout<<endl;
    return 0;
}
