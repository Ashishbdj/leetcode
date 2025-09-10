class Solution {
    public:
    void per(vector<int>&nums,int i,int n,vector<vector<int>>& ans)
    {
        int j;
        if(i==n)
        {
            ans.push_back(nums);
        }else
        {
            
            for(int j=i;j<=n;j++)
            {
                swap(nums[i],nums[j]);
                per(nums,i+1,n,ans);
                swap(nums[i],nums[j]);
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        per(nums,0,nums.size()-1,ans);
        return ans;
    }
};