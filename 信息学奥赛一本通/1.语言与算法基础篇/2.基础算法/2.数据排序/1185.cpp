#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
	string a[100];
	int id = 0;
	while(cin>>a[id]){
		bool flag = false;
        for(int i = 0; i < id; i++){
            if(a[i].compare(a[id])==0){
                flag = true;
                break;
            }
        }
        if(!flag)
            id++;
	}
	sort(a, a + id);
	for(int i = 0; i < id; i++){
		cout<<a[i]<<endl;
	}
    return 0;
}
