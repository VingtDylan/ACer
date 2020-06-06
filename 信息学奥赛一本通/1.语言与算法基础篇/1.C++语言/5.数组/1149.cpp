#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[2500];gets(s);
    int len=strlen(s)-1;
    int max_len=0,max_position;
    int sum=0;

    for(int i = 0; i <= len; i++){
        if(s[i]!=' '&&s[i]!='.')
			sum++;
        else if(sum > 0){
            if(sum > max_len){
                max_len = sum;
                max_position = i-sum;
            }
            sum = 0;
        }
    }
    for(int i = max_position; i < max_len + max_position; i++)
        cout<<s[i];
    cout<<endl;
    return 0;
}
