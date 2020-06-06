#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n;cin>>n;
    char str[25];
    int len;
    for(int i = 0; i < n; i++){
        scanf("%s",str);
        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] -= 32;
        len = strlen(str);
        for(int j = 1; j < len; j++) 
            if(str[j] >= 'A' && str[j] <= 'Z')
                str[j] += 32;
        puts(str);
    }
    return 0;
}
