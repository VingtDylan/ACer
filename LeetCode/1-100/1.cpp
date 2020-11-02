class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            int rest = target - nums[i];
            if(mp.count(rest))return{mp[rest],i};
            mp[nums[i]] = i;
        }
        return {};
    }
};