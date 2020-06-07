#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct stu{
	string name;
	int grade;
}a[100];

bool cmp(const stu &s1, const stu &s2){
	return s1.grade > s2.grade;
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
