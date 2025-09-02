class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,sum=0;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
                while(sum>=target)
                {
                    ans=min(ans,(i-k+1));
                    sum-=nums[k];
                    k++;
                }
        }
        return (ans==INT_MAX)?0:ans;
    }
};