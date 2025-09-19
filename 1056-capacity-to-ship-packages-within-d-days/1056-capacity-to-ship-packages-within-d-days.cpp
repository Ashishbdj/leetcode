class Solution {
public:
    int findDays(vector<int>&arr,int weight)
    {
        int days=1,w=0;
        for(int i=0;i<arr.size();i++)
        {
            if(w+arr[i]>weight)
            {
                days+=1;
                w=arr[i];
            }else
            {
                w+=arr[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=0,high=0;
        for(int i=0;i<n;i++)
        {
            high+=weights[i];
            if(low<weights[i]) low=weights[i];
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cdays=findDays(weights,mid);
            if(cdays<=days)
            {
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        return low;
    }
};