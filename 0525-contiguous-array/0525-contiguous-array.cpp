class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>hash(n);
        int prefix_sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            (nums[i]==0)?prefix_sum+=-1:prefix_sum+=1;
            if(prefix_sum==0)
            {
                ans=max(ans,i+1);
            }else if(hash.find(prefix_sum)!=hash.end())
            {
                ans=max(ans,i-hash[prefix_sum]);
            }else
            {
                hash[prefix_sum]=i;
            }
        }
     return ans;
    }
};