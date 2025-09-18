class Solution {
public:
    int Botique(vector<int>& bloomDay, int mid, int k)
    {
        int count=0,c_b=0;
        for(int i:bloomDay)
        {
            if(i<=mid)
            {
                count++;
            }else
            {
                c_b+=(count/k);
                count=0;
            }
        }
        c_b+=(count/k);
        return c_b;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high= *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            int current_m=Botique(bloomDay,mid,k);
            if(current_m<m)
            {
                low=mid+1;
            }else
            {
                high=mid-1;
            }
        }
        return low;
    }
};