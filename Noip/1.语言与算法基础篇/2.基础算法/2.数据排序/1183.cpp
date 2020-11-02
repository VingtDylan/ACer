#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

struct peo{
	char id[10];
	int num;
	int age;
	bool operator < (const peo s){
		if(age >= 60){
			if(s.age < 60)return true;
			else{
				if(age == s.age)
					return num < s.num;
				return age > s.age;
			}
		}else{
			if(s.age >= 60)return false;
			return num < s.num;
		}
	}
}a[101];

int main(){
	int n;cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i].id>>a[i].age;
		a[i].num = i + 1;
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		cout<<a[i].id<<endl;
	}
    return 0;
}
