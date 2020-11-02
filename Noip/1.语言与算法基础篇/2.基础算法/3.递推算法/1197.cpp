#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

const int M = 501;
int a[M][M],c[M][M],f[M][M]; 

int main(){
	int m,n;cin>>m>>n;
	for(int i = 1; i < m; i++)cin>>a[i][i + 1];
	for(int i = 1; i <= m; i++){
		for(int j = i + 1; j <= m; j++){
			a[i][j] = a[j - 1][j] + a[i][j - 1];
			a[j][i] = a[i][j];
		}
	}
	for(int i = 1; i <= m; i++){
		for(int j = i + 1; j <= m; j++){
			int mid = (i + j) / 2;
			c[i][j] = 0;
			for(int k = i; k <= j; k++){
				c[i][j] += a[k][mid];
			}
		}
	}
	for(int i = 1; i <= m; i++)f[i][1] = c[1][i];
	for(int i = 1; i <= m; i++){
		for(int j = 2; j <= n; j++){
			f[i][j] = 0x3f3f3f3f;
			for(int k = j - 1; k <= i; k++){
				f[i][j] = min(f[i][j], f[k][j - 1] + c[k + 1][i]);
			}
		}
	}
	cout<<f[m][n]<<endl;
    return 0;
}
