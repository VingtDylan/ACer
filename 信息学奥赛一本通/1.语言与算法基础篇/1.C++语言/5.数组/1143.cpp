#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char s[10000];gets(s);
    int len=strlen(s);
    s[len]=' ';
    int sum=0,max_len=0,min_len=9999;
    int max_position,min_position;
    for(int i = 0; i < len; i++){
        if(s[i]!=' '&&s[i]!=',')
			sum++;
        else if(sum > 0){
            if(sum > max_len){
                max_len = sum;
                max_position = i-sum;
            }
            if(sum < min_len){
                min_len = sum;
                min_position = i - sum;
            }
            sum = 0;
        }
    }
    for(int i = max_position; i< max_position + max_len; i++)
        cout<<s[i];
    cout<<endl;
    for(int i = min_position; i< min_position + min_len; i++) 
        cout<<s[i];
	cout<<endl;
    return 0;
}
