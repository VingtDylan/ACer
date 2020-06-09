/*
#include<iostream>
#include<cstring>
using namespace std;

long long a[30][30];
int vis[30][30];
int next[][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    memset(vis,0,sizeof(vis));
    
    a[0][0] = 0;
    a[x][y] = 0;
    vis[x][y] = 1;
     
    for(int i = 0; i < 8; i++){
        int nx = x + next[i][0];
        int ny = y + next[i][1];
        if(0 <= nx && nx <= n && 0 <= ny && ny <= m){
            vis[nx][ny] = 1;
            a[nx][ny] = 0;
        }
    }
    for(int i = 0; i <= n; i++){
        if(vis[i][0] == 1)
            while(i <= n){
            	i++;
                a[i][0] = 0;
            }
        else 
            a[i][0] = 1;
    }
    for(int j = 0; j <= m; j++){
        if(vis[0][j] == 1)
            while(j <= m){
                j++;
                a[0][j] = 0;
            }
        else 
            a[0][j] = 1;
    }
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(vis[i][j] == 0)
                a[i][j] = a[i][j-1] + a[i-1][j];
    cout<<a[n][m]<<endl;
    return 0;
}
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	//其实还有大整数问题 
	long long f[30][30] = {0};
	int g[30][30] = {0};
	int d[2] = {1, -1};
	g[x][y] = 1;
	for(int i = 1; i <= 2; i++){
		int j = 3 - i;
		for(int a = 0; a < 2; a++){
			for(int b = 0; b < 2; b++){
				int tx = x + d[a] * i;
				int ty = y + d[b] * j;
				if(tx >= 0 && tx <= n && ty >= 0 && ty <= m){
					g[tx][ty] = 1;
					f[tx][ty] = 0;
				}
			}
		}
	}
	f[x][y] = 0;
	f[0][0] = 0;
	
	// 路断了需要处理 
	for(int i = 0; i <= n; i++){
        if(g[i][0])
            while(i <= n){
            	i++;
                f[i][0] = 0;
            }
        else 
            f[i][0] = 1;
    }
    
	for(int i = 0; i <= m; i++){
        if(g[0][i])
            while(i <= m){
                i++;
                f[0][i] = 0;
            }
        else 
            f[0][i] = 1;
    }
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(!g[i][j])f[i][j] = f[i][j - 1] + f[i - 1][j];
		}
	}
	cout<<f[n][m ]<<endl;
    return 0;
}

