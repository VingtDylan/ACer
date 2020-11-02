#include<iostream>
#include<stdio.h>
using namespace std;

int n;
char c[101][101];
bool used[101][101];
int m;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void change(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(c[i][j] == '.'){
				for(int d = 0; d < 4; d++){
					int tx = i + dx[d];
					int ty = j + dy[d];
					if(tx >= 0 && ty >= 0 && tx < n && ty < n && c[tx][ty] == '@' && used[tx][ty])
						c[i][j] = '@';
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(c[i][j] == '@'){
				used[i][j] = true;
			}
		}
	}
}

int main(){
	cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>c[i][j];
			if(c[i][j] == '@')
				used[i][j] = true;
			else
				used[i][j] = false;
		}
	} 
	cin>>m;
	for(int i = 1; i < m; i++){
		change();
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(c[i][j] == '@')
				res++;
		}
	} 
	cout<<res<<endl;
    return 0;
}
