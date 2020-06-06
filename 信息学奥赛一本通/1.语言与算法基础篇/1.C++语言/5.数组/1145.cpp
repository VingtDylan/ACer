#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char s[1000];gets(s);
    int len=strlen(s);
	int position;
    int sum=1;
    int i;
    for(i = 0; i < len; i++){
        if(s[i]==s[i+1])	
            sum++;
        else{
            cout<<sum<<s[i];
            sum=1;
        }
    }
    cout<<endl;
    return 0;
}
