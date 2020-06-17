#include<iostream>
#include<iomanip>
using namespace std;

int n;
char a[129];
int step;
int loc;

void print(){
    cout<<"step"<<setw(2)<<step<<":";
    for(int i = 0; i <= 2 * n + 1; i++)cout<<a[i];
    cout<<endl;
    step++;
}

void move(int k){
    a[loc] = a[k];
    a[loc + 1] = a[k + 1];
    a[k] = '-';
    a[k + 1] = '-';
    loc = k;
    print();
}

void process(int x){
    if(x == 4){
        move(3);
        move(7);
        move(1);
        move(6);
        move(0);
    }else{
        move(x - 1);
        move(2 * x - 2);
        process(x - 1);
    }
}

int main(){
    cin>>n;
    for(int i = 0; i < n; i++)a[i] = 'o';
    for(int i = n; i < 2 * n; i++)a[i] = '*';
    a[2 * n] = '-';
    a[2 * n + 1] = '-';
    loc = 2 * n;
    print();
    process(n);
    return 0;
}