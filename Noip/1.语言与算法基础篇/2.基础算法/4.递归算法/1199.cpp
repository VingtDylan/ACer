#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

string a;
int len;
bool used[6];
char temp[7];

void dfs(int n){
	if(n == len){
		temp[n ]= '\0';
		cout<<temp<<endl;
		return;
	}
	for(int i = 0; i < len; i++){
		if(!used[i]){
			used[i] = true;
			temp[n] = a[i];
			dfs(n + 1);
			used[i] = false;
		}
	}
	
}

int main(){
	cin>>a;
	len = a.length();
	memset(used,false,sizeof(used));
	dfs(0);
    return 0;
}

