class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = 10010;
        int bit[n];
        for(int ar : arr)bit[ar] = count(ar);
        sort(arr.begin(),arr.end(),[&](int x, int y){
            return bit[x] == bit[y] ? x < y : bit[x] < bit[y];
        });
        return arr;
    }

    int count(int x){
        int res = 0;
        while(x){
            res += x & 1;
            x >>= 1;
        }
        return res;
    }
};