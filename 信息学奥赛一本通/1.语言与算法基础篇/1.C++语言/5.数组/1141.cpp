#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char s[200];gets(s);
    int len=strlen(s);
    if(s[len-2]=='e'&&s[len-1]=='r'){
        s[len-2]='\0';
        s[len-1]='\0';
    }
 
    if(s[len-2]=='l'&&s[len-1]=='y'){
        s[len-2]='\0';
        s[len-1]='\0';
    }
 
    if(s[len-3]=='i'&&s[len-2]=='n'&&s[len-1]=='g'){
        s[len-3]='\0';
        s[len-2]='\0';
        s[len-1]='\0';
    }
    puts(s);
    return 0;
}
