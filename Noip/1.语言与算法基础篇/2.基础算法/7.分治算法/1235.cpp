/* TLE了
#include<iostream>
#include<algorithm>
using namespace std;

int n,k;
int a[100010];

int cmp(const void *a,const void *b){
    return (*(int *)a) - (*(int *)b);
}

void quickSort(int st,int ed, int k){
    if(ed - st + 1 == k)return;
    int i = st, j = ed, pivot = a[st];
    while(i < j){
        while(i < j && a[j] >= pivot)j--;
        while(i < j && a[i] <= pivot)i++;
        swap(a[i], a[j]);
    }
    if (a[i] < pivot)swap(a[st], a[i]);
    else swap(a[st], a[i - 1]);
    int len = ed - i + 1;
    if(len == k)return ;
    else if(len > k)quickSort(i + 1, ed ,k);
    else quickSort(st, i - 1, k - len);
}

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)cin>>a[i];
    cin>>k;
    quickSort(0, n - 1, k);
    qsort(a + n - k, k, sizeof(a[0]),cmp);
    for(int i = n - 1; i >= n - k; i--)
        cout<<a[i]<<endl;
    return 0;
}
*/

#include<stdio.h>
#include<algorithm>
using namespace std;

int a[100010];

bool cmp(int x, int y){
    return x > y;
}

int main(){
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n,cmp);
    scanf("%d", &m);
    for (int i = 0; i < m; i++){
        printf("%d\n", a[i]);
    }
}

