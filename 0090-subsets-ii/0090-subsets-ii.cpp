class Solution {
public:

    void printsubset(vector<int>& nums,vector<int>& s,int i,set<vector<int>>& ans)
    {
        if(i==nums.size())
        {
            ans.insert(s);
            return;
        }
        s.push_back(nums[i]);
        printsubset(nums,s,i+1,ans);
        s.pop_back();
        printsubset(nums,s,i+1,ans);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> se;
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        printsubset(nums,se,0,ans);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};