#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[1000];gets(s);
    int len=strlen(s);
	int position;
    int sum=0;
    s[len]=' ';
    for(int i = 0; i <= len; i++){
        if(s[i] != ' ')
            sum++;
        else{
            position = i;
            for(int j = 1; j <= sum; j++)
                cout<<s[--position];
            sum = 0;
            if(i != len)
                cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
