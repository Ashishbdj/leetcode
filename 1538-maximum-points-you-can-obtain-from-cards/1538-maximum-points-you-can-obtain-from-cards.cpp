class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int ans=0;
        int l=0,r=n-1;
        int lsum=0,rsum=0;
        int kk=k;
        while(k!=0)
        {
           lsum+=cardPoints[l];
           l++;
           k--;
        }
        l--;
        ans=lsum+rsum;
        while(kk!=0)
        {
            rsum+=cardPoints[r];
            r--;
            lsum-=cardPoints[l];
            l--;
            ans=max(ans,(rsum+lsum));
            kk--;
        }
        return ans;
    }
};