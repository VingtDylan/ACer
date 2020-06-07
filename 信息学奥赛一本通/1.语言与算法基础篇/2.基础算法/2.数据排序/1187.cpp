#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int a[26] = {0};
	char str[1001];
	cin>>str;
	int len = strlen(str);
	for(int i = 0; i < len; i++){
		a[str[i] - 'a']++;
	}
	int max = 0;
	for(int i = 0; i < 26; i++){
		if(a[i] > max)
			max = a[i];
	}
	for(int i = 0; i < 26; i++){
		if(a[i] == max)
			cout<<char(i + 'a')<<" "<<max<<endl;
	}
    return 0;
}
