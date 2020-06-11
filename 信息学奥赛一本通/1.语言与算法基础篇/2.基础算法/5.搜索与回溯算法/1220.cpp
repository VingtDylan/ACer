#include<iostream>
#include<cstring>
using namespace std;

int n;
string str[30];
int used[30];
char c;
int res;
int len;

void dfs(int x){
    int i1,i2;
    bool flag;
    int i;
    for(i = 0; i < str[x].length(); i++){
        for(int j = 0; j < n; j++){
            if(used[j] < 2){
                if(str[x][i] == str[j][0]){
                    i1 = i,i2 = 0;
                    flag = true;
                    while(i1 < str[x].length()){
                        if(str[x][i1] != str[j][i2]){
                            flag = false;
                            break;
                        }
                        i1++;i2++;
                    }
                    if(flag && i2 != str[j].length()){
                        res += str[j].length() - i2;
                        used[j]++;
                        dfs(j);
                        res -= str[j].length() - i2;
                        used[j]--;
                    }
                }
            }
        }
    }
    if(i == str[x].length()){
        if(len < res)len = res;
    }
}

int main(){
    memset(used,0,sizeof(used));
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }
    cin>>c;
    len = 0;
    for(int i = 0; i < n; i++){
        if(str[i][0] == c){
            res = str[i].length();
            used[i] = 1;
            dfs(i);
        }
    }
    cout<<len<<endl;
    return 0;
}