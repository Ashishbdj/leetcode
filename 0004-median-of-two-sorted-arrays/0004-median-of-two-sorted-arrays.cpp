class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums.begin());
        int s =nums.size()/2;
        double ans;
       if(nums.size()%2==0)
       {
            ans=((double)nums[s-1]+nums[s])/2;
            return ans;
       }
       return nums[s];
    }
};