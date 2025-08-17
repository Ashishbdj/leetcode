class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_set<int> value;
       for(int i=0;i<nums.size();i++)
       {
            int c=target-nums[i];
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==c && i!=j)
                {
                    return{i,j};
                }
            }
       }
        return {};
    }

};
