class Solution {
public:

    void printsubset(vector<int>& nums,vector<int>& s,int i,vector<vector<int>>& ans)
    {
        if(i==nums.size())
        {
            ans.push_back(s);
            return;
        }
        s.push_back(nums[i]);
        printsubset(nums,s,i+1,ans);
        s.pop_back();
        int index=i+1;
        while(index<nums.size()&&nums[i]==nums[index])index++;
        printsubset(nums,s,index,ans);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> se;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        printsubset(nums,se,0,ans);
        return ans;
    }
};