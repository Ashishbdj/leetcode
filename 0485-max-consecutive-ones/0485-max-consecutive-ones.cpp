class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=nums.size(),i,max=0,max1;
        for(int i=0;i<s;i++)
        {
            if(nums[i]==1)
            {
                max+=1;
            }else
            {
                if(max1<max)
                {
                    max1=max;
                }
                 max=0;
            }
            
        }
        if(max1<max)
         {
                    max1=max;
         }
        return max1;
    }
};