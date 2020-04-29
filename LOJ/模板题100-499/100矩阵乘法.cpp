#include<iostream>
#include<stdio.h>
using namespace std;

const int maxn = 500;
const long long mod = 1e9 + 7;
int n,p,m;
long long a[maxn][maxn];
long long b[maxn][maxn];

int main(){
	scanf("%d %d %d",&n,&p,&m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			scanf("%lld",&a[i][j]); 
			a[i][j] = (a[i][j] + mod) % mod;
		}
	} 
	
	for(int i = 0; i < p; i++){
		for(int j = 0; j < m; j++){
			scanf("%lld",&b[i][j]);
			b[i][j] = (b[i][j] + mod) % mod;
		}
	} 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			long long res = 0ll;
			int k;
			for(k = 0; k < p; k++){
				res = res + a[i][k] * b[k][j] % mod;
				res %= mod;
			}
			cout<<res;
			if(j < m - 1)
				cout<<" ";
		}
		cout<<endl;
	} 

	return 0;
}
/*
3 4 5
605484667 -184715359 -844798432 303281860
154160217 251340539 503442468 -585835226
-605901720 -111757647 145470433 -601423285
83215279 444795017 210075636 921181746 560215639
-392073611 -248331514 -984830557 766445752 -888503479
811152088 -721594655 299338374 779359743 -766800655
-68463587 -878021890 -370611066 502520549 -952228
*/
