class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int res = 0;
        for(int i = 0, j = 0; i < s.size(); i++){
            mp[s[i]]++;
            while(mp[s[i]] > 1) mp[s[j++]]--;
            res = max(res, i - j + 1);
        }
        return res;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vec(128, -1);
        int res = 0, left = -1;
        for(int i = 0; i < s.size(); i++){
            left = max(left, vec[s[i]]);
            vec[s[i]] = i;
            res = max(res, i - left);
        }
        return res;
    }
};