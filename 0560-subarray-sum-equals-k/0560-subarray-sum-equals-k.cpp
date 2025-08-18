class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>presum;
    presum[0]=1;
    int c=0,psum=0;
    for(int i=0;i<nums.size();i++)
    {
        psum+=nums[i];
        int v = psum-k;
        c+=presum[v];
        presum[psum]+=1;
    }
    return c;
    }
};