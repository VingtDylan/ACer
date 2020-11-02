#include<iostream>
#include<algorithm>

using namespace std;

const int maxn = 101;
const int fren = 26;

void cnt(char* t ,int* fre){
    for(int i = 0; *(t + i) != '\0'; i++){
        *(fre + (*(t + i) - 'A')) += 1;
    }
    sort(fre, fre + fren);
}

bool isSame(int* fre1, int * fre2){
    for(int i = 0; i < fren; i++){
        if(*(fre1 + i) != *(fre2 + i))
            return false;
    }
    return true;
}

int main() {
    char a[maxn] = {'\0'};
    char b[maxn] = {'\0'};
    int c[fren] = {0};
    int d[fren] = {0};
    cin>>a>>b;
    cnt(a,c);
    cnt(b,d);
    cout<<(isSame(c,d)?"YES":"NO")<<endl;
    return 0;
}