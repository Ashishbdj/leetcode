class Solution {
    public:
    void per(vector<int>&nums,int i,int n,set<vector<int>>& ans)
    {
        int j;
        if(i==n)
        {
            ans.insert(nums);
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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        per(nums,0,nums.size()-1,ans);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};