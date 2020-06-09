#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct stu{
	char name[30];
	int grade;
}a[100];

bool cmp(const stu &s1, const stu &s2){
	if(s1.grade > s2.grade)return true;
	else if(s1.grade == s2.grade){
		if(strcmp(s1.name,s2.name) < 0){
			return true;
		}
	}
	return false;
}

int main(){
	int n;cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i].name>>a[i].grade;	
	}
	sort(a,a+n,cmp);
	for(int i = 0; i < n; i++){
		cout<<a[i].name<<" "<<a[i].grade<<endl;	
	}
    return 0;
}
