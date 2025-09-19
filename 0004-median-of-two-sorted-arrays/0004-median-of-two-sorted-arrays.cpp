class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size()+nums2.size());
        int n=nums1.size(),n1=nums2.size();
        int i=0,j=0,k=0;
        while(i<n&&j<n1)
        {
            if(nums1[i]<nums2[j])
            {
                nums[k++]=nums1[i++];
            }else
            {
                nums[k++]=nums2[j++];
            }
        }
        while(i<n)nums[k++]=nums1[i++];
        while(j<n1)nums[k++]=nums2[j++];
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