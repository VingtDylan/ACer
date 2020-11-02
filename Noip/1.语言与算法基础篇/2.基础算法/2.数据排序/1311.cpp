#include<iostream>
#include<stdio.h>

using namespace std;

int a[100000];
int b[100000];
long long res = 0;

void merge(int left, int right){
	if(left >= right)return ;
	int mid = left + right >> 1;
	merge(left, mid);
	merge(mid + 1, right);
	int i = left;
	int j = mid + 1;
	int k = left;
	while(i <= mid && j <= right){
		if(a[i] <= a[j]){
			b[k] = a[i];
			k++;
			i++;
		}else{
			b[k] = a[j];
			k++;
			j++;
			res += mid - i + 1;
		}
	}
	while(i <= mid){
		b[k] = a[i];
		k++;
		i++;
	}
	while(j <= right){
		b[k] = a[j];
		k++;
		j++;
	}
	for(i = left; i <= right; i++){
		a[i] = b[i];
	}
}

int main(){
	int n;cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	merge(0,n - 1);
	cout<<res<<endl;
    return 0;
}
