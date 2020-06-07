#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct part{
	int id;
	int grade;
}a[5001];

bool cmp(const part &s1, const part &s2){
	return s1.grade > s2.grade || (s1.grade == s2.grade && s1.id < s2.id);
}

int main(){
	int n,m;cin>>n>>m;
	for(int i = 0; i < n; i++){
		cin>>a[i].id>>a[i].grade;
	}
	int k = m * 1.5;
	sort(a,a + n,cmp);
	int score = a[k].grade;
	int count = 0;
	for(int i = 0; i < n; i++){
		if(a[i].grade >= score){
			count++;
		}else{
			break;
		}
	}
	cout<<score<<" "<<count<<endl;
	for(int i = 0; i < n; i++){
		if(a[i].grade >= score){
			cout<<a[i].id<<" "<<a[i].grade<<endl;
		}else{
			break;
		}
	}
    return 0;
}
