class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;  // stores number -> index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};  // found the pair
            }
            mp[nums[i]] = i;  // store the current number and its index
        }
        return {};  // no solution found
    }
};
