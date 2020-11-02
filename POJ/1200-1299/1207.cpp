#include <iostream>

using namespace std;

int count(int num){
    int cnt = 1;
    while(num > 1){
        if(num & 1){
            num = 3 * num + 1;
        } else{
            num /= 2;
        }
        cnt++;
    }
    return cnt;
}

int main() {
    int l,r;
    while(cin>>l>>r){
        int ll = l <= r ? l : r;
        int rr = l > r ? l : r;
        int maxCnt = -1;
        int cnt;
        for(int i = ll; i <= rr; i++){
            cnt = count(i);
            maxCnt = maxCnt < cnt ? cnt : maxCnt;
        }
        cout<<l<<" "<<r<<" "<<maxCnt<<endl;
    }
    return 0;
}