class Solution {
public:

    int kfind(vector<int>& piles, int k ,int h)
    {
        int hr=0;
        for(int i:piles)
        {
            hr+=(i+k-1)/k;
        }
        return hr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        auto m=max_element(piles.begin(),piles.end());
        int low=1,high=*m;
        while(low<high)
        {
            int mid=(low+high)/2;
            int hr=kfind(piles,mid,h);
            if(hr<=h)
            {
                high=mid;
            }else
            {
                low=mid+1;
            }
        }
        return low;
    }
};