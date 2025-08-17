class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> value;
       for(int i=0;i<nums.size();i++)
       {
            int c=target-nums[i];
            auto it = value.find(c);
            if(it!=value.end())
            {
                return{i,it->second};
            }
            value.insert({nums[i],i});
       }
        return {};
    }

};
