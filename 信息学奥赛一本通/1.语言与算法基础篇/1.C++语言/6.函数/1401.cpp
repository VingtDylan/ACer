#include<iostream>
#include<stdio.h>

using namespace std;

int a[1001] = {0};
int b[1001] = {0};
int m,n;
int res = 0;
int word;
int index = 0;
int store = 0;

void remove(int word){
	a[b[index]] = 0;
	res++;
	a[word] = 1;
	b[index] = word;
	index = (index + 1)% n;
}

int main(){
	cin>>m>>n;
	for(int i = 1; i <= n;i++){
		cin>>word;
		if(a[word] == 1)continue;
		if(a[word] == 0 && res < m){
			a[word] = 1;
			res++;
			b[store] = word;
			store = (store + 1)% m;
		}else{
			remove(word);
		}
	}
	cout<<res<<endl;
    return 0;
}
