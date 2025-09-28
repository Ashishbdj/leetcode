class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-2;i++)
        {
           int a=nums[i],b=nums[i+1],c=nums[i+2];
            if(a+b>c)
            {
                ans=max(ans,a+b+c);
            }
        }
        return ans;
    }
};