class Solution {
public:
    int maxProfit(vector<int>& nums) {
       int m=nums[0],profit=0;
       for(int i=0;i<nums.size();i++)
       {
        m=min(nums[i],m);
        profit=max((nums[i]-m),profit);
       }
        return profit;
    }
};