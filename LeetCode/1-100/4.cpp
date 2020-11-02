class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int mid1 = (m + n + 1) / 2;
        int mid2 = (m + n + 2) / 2;
        return (p(nums1,nums2,mid1) + p(nums1,nums2,mid2)) / 2.0;
    }

    double p(vector<int> nums1, vector<int> nums2, int k){
        if(nums1.empty())return nums2[k - 1];
        if(nums2.empty())return nums1[k - 1];
        if(k == 1)return min(nums1[0],nums2[0]);
        int k1 = min((int)nums1.size(), k / 2);
        int k2 = min((int)nums2.size(), k / 2);
        if(nums1[k1 - 1] < nums2[k2 - 1]){
            return p(vector<int>(nums1.begin() + k1, nums1.end()), nums2, k - k1);
        }else{
            return p(nums1,vector<int>(nums2.begin() + k2, nums2.end()),k - k2);
        }
    }
};

