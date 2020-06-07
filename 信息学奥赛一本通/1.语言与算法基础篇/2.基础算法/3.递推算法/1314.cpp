#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	//其实还有大整数问题 
	int f[20][20] = {0};
	int g[20][20] = {0};
	int d[2] = {1, -1};
	g[x][y] = 1;
	for(int i = 1; i <= 2; i++){
		int j = 3 - i;
		for(int a = 0; a < 2; a++){
			for(int b = 0; b < 2; b++){
				int tx = x + d[a] * i;
				int ty = y + d[b] * j;
				if(tx >= 0 && tx <= n && ty >= 0 && ty <= m)
					g[tx][ty] = 1;
			}
		}
	}
	f[0][0] = 1;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){
			if(g[i][j])f[i][j] = 0;
			else if(!i&& j)f[i][j] = f[i][j - 1];
			else if(i && !j)f[i][j] = f[i - 1][j];
			else if(i && j)f[i][j] = f[i][j - 1] + f[i - 1][j];
		}
	}
	cout<<f[n][m ]<<endl;
    return 0;
}

