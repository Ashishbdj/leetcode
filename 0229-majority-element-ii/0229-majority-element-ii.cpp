class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        if(n==1)
        {
            return {nums[0]};
        }
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
            }else
            {
                if(n/3<count)
                {
                    ans.push_back(nums[i]);
                }
                count=1;
            }
        }
        if(n/3<count)
                {
                    ans.push_back(nums[n-1]);
                }
        return ans;
    }
};