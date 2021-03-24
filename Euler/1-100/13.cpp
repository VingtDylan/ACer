#include <iostream>
#include <vector>
using namespace std;

vector<int> s[100];
string num;
vector<int> res;

int main(){
    for(int i = 0; i < 100; i++){
        cin >> num;
        for(int j = 49; j >= 0; j--){
            s[i].push_back(num[j] - '0');
        }
    }
    int carry = 0;
    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 100; j++)
            carry += s[j][i];
        res.push_back(carry % 10);
        carry /= 10;
    }
    while(carry){
        res.push_back(carry  % 10);
        carry /= 10;
    }
    for(int i = res.size() - 1; i >= res.size() - 10; i--)
        cout << res[i];
    return 0;
}