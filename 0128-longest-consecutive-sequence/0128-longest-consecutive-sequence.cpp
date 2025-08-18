class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int m=1,maxsize=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                maxsize++;
            }else if(nums[i]!=nums[i-1]){
                m=max(m,maxsize);
                maxsize=1;
                
            }   
        }
        return max(m,maxsize);
    }
};