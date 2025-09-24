class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int ans=0,n=nums.size(),odd=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==1)odd++;
            while(odd>k)
            {
                if(nums[l]%2==1)odd--;
                l++;
            }
            ans+=(i-l+1);
            
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
       
        return atmost(nums,k)-atmost(nums,k-1);
    }
};