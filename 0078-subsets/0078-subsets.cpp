class Solution {
public:

    void printsubset(vector<int>& nums,vector<int>& set,int i,vector<vector<int>>& ans)
    {
        if(i==nums.size())
        {
            ans.push_back(set);
            return;
        }
        set.push_back(nums[i]);
        printsubset(nums,set,i+1,ans);
        set.pop_back();
        printsubset(nums,set,i+1,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> set;
        vector<vector<int>>ans;
        printsubset(nums,set,0,ans);
        return ans;
    }
};