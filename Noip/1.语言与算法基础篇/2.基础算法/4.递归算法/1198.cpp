#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

char a[101];

double cal(){
	scanf("%s",a);
	if(a[0] == '+'){
		return cal() + cal();
	}else if(a[0] == '-'){
		return cal() - cal();
	}else if(a[0] == '*'){
		return cal() * cal();
	}else if(a[0] == '/'){
		return cal() / cal();
	}else{
		return atof(a);
	}
}

int main(){
	printf("%f\n",cal());
    return 0;
}

