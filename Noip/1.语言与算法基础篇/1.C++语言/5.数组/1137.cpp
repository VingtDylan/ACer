#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    char a[256];gets(a);
	int len = strlen(a);
	char temp;
    for(int i = 0; i < len; i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            temp = a[i];
            temp += 3;
            if(temp > 122)
				temp -= 26;
            temp -= 32;
            a[i] = temp;
        }
        else if(a[i] >= 'A' && a[i] <= 'Z'){
            temp = a[i];
            temp += 3;
            if(temp > 90)	
				temp-=26;
            temp += 32;
            a[i] = temp;
        }
    }
    for(int i = len - 1; i >= 0; i--) 
        cout<<a[i];
    cout<<endl;
    return 0;
}
