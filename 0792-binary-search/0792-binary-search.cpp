class Solution {
    int binary(vector<int>& nums,int target,int s,int e)
    {
        if(s<=e)
        {
        int mid = (s+e)/2;
        if(target == nums[mid]) return mid;
        else if(target>nums[mid]) return binary(nums,target,mid+1,e);
        else return binary(nums,target,s,mid-1);
        }

        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
       return binary(nums,target,0,nums.size()-1);
    }
};