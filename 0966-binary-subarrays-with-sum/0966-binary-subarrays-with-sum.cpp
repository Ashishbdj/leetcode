class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0,n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int cursum=0;
        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            if(mp.find(cursum-goal)!=mp.end())
            {
                ans+=mp[cursum-goal];
            }  
            mp[cursum]++;         
        }
        return ans;
    }
};