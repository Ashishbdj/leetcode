class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j=0,temp;
        if(nums.size()<2)
        {
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[j]==0)
            {
                j++;
            }else if(nums[i]==0)
            {
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
        for(int i=j;i<nums.size();i++)
        {
            if(nums[j]==1)
            {
                j++;
            }else if(nums[i]==1)
            {
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j++;
            }
        }
    }
};