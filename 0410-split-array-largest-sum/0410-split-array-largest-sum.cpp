class Solution {
public:
    int noSubArray(vector<int>& nums,int mid,int n)
    {
        int count=0,temp=0;
        for(int i=0;i<n;i++)
        {
            if(temp+nums[i]<=mid)
            {
                temp+=nums[i];
            }else
            {
                count++;
                temp=nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,h=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>l)
            {
                l=nums[i];
            }
            h+=nums[i];
        }
        while(l<=h)
        {
            int mid=(l+h)/2;
            int v = noSubArray(nums,mid,n);
            if(v<k){ans=mid; h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};