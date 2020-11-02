#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a[101][101];
	double b[101][101];
    int m,n;cin>>n>>m;
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m)
                b[i][j]=a[i][j];
            else
            	b[i][j]=round((a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/5.0);//按要求用round()四舍五入
        }
    }
    
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<b[i][j]<<" ";
		cout<<endl;
    }
    return 0;
}

