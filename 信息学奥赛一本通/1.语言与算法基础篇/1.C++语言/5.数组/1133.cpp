#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	char a[100];
	gets(a);
	char b[100];
	int len = strlen(a);
	for(int i = 0; i < len; i++){
		b[i] = a[i] + a[(i + 1) % len];
	}
	cout<<b<<endl;
//    for(int i=0; i<=len-2; i++) 
//        cout<<char(a[i]+a[i+1]);
//    cout<<char(a[len-1]+a[0])<<endl;
	return 0;
}

//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int main()
//{
//    char a[101];
//    int len;
//    int i;
//    gets(a);
//    len=strlen(a);
// 
//    for(i=0; i<=len-2; i++) 
//        cout<<char(a[i]+a[i+1]);
//    cout<<char(a[len-1]+a[0])<<endl;
//    return 0;
//}
