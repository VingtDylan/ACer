#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char str[1010];

int main(){
	int a[26] = {0};
	cin>>str;
	int len = strlen(str);
	for(int i = 0; i < len; i++){
		a[str[i] - 'a']++;
	}
	int max = -1;
	int j = 0;
	for(int i = 0; i < 26; i++){
		if(a[i] > max){
			max = a[i];
			j = i;
		}		
	}
	cout<<char(j + 'a')<<" "<<max<<endl;
    return 0;
}
