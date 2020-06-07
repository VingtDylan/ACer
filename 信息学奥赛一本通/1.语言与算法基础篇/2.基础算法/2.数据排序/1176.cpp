#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct stu{
	int num;
	double grade;
}a[100];

bool cmp(const stu &s1, const stu &s2){
	return s1.grade > s2.grade;
}

int main(){
	int n,k;cin>>n>>k;
	for(int i = 0; i < n; i++){
		cin>>a[i].num>>a[i].grade;	
	}
	sort(a,a+n,cmp);
	printf("%d %g",a[k - 1].num,a[k - 1].grade);
    return 0;
}
