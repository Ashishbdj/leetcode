class Solution {
public:
    int divide(vector<int>& nums,int mid)
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=(nums[i]+mid-1)/mid;
    
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid = (low+high)/2;
            int currentValue= divide(nums,mid);
            if(currentValue<=threshold)
            {
                high=mid-1;
            }else
            {
                low=mid+1;
            }

        }
        return low;
    }
};