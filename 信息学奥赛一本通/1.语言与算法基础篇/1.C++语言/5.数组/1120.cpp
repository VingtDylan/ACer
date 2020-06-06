#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;cin>>n;
	int x,y;cin>>x>>y;
	for(int i=1;i<=n;i++)
        printf("(%d,%d) ",x,i);
    cout<<endl;
    for(int i=1;i<=n;i++)
        printf("(%d,%d) ",i,y);
    cout<<endl;
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(x-y==i-j)
                printf("(%d,%d) ",i,j);
    cout<<endl;
    for(int i=n;i>=1;i--)
        for(int j=n;j>=1;j--)
            if(x+y==i+j)
                printf("(%d,%d) ",i,j);
    cout<<endl;
    return 0;
}
