#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


struct student{
    string name;
    int score;
} a[100];

int main(){
    int n;cin>>n;
    for(int i = 0; i < n; i++){
    	cin>>a[i].score;
    	cin>>a[i].name;
	}
	for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - 1 - i; j++)
            if(a[j].score < a[j + 1].score)
                swap(a[j],a[j + 1]);
 
    cout<<a[0].name<<endl;
    return 0;
}
