#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct student{
	int id;
	int chi;
	int math;
	int eng;
	int t;
}a[300];

bool cmp(const student &s1, const student &s2){
	if(s1.t > s2.t)return true;
	if(s1.t == s2.t){
		return s1.chi > s2.chi || (s1.chi == s2.chi && s1.id < s2.id);
	}
	return false;
}

int main(){
	int n;cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i].chi>>a[i].math>>a[i].eng;
		a[i].id = i + 1;
		a[i].t = a[i].chi + a[i].math + a[i].eng;
	}
	sort(a,a + n,cmp);
	for(int i = 0; i < 5; i++){
		cout<<a[i].id<<" "<<a[i].t<<endl;
	}
    return 0;
}
