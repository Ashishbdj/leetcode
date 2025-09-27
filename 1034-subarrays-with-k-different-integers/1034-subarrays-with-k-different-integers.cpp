class Solution {
public:

    int kdist(vector<int>& nums, int k)
    {
        int ans=0,n=nums.size(),l=0;
         unordered_map<int,int>ct;
        for(int i=0;i<n;i++)
        {
            ct[nums[i]]++;
            
            while(ct.size()>k)
            {
                ct[nums[l]]--;

                if(ct[nums[l]]==0)
                {
                    ct.erase(nums[l]);
                }
                l++;
            }
            ans+=(i-l)+1;
           
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
     return kdist(nums,k)-kdist(nums,k-1);  
    }
};