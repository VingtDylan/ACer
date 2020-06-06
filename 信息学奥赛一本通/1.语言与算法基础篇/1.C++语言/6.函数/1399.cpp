#include<iostream>
#include<stdio.h>
using namespace std;

bool judge(float x,int y);
 
int main(){
    int n;cin>>n;
    float temp[201];
    int cough[201];
    string name[201];
    int sum = 0;
 
    for(int i = 1; i <= n; i++)
        cin>>name[i]>>temp[i]>>cough[i];
    for(int i = 1; i <= n; i++)
        if(judge(temp[i],cough[i])){
            cout<<name[i]<<endl;
   			sum++;
        }
    cout<<sum<<endl;
    return 0;
}
bool judge(float x,int y){
    if((x >= 37.5) && (y == 1))
        return true;
    else
        return false;
}
