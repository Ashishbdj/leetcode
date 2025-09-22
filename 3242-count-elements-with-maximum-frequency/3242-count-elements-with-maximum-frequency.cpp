class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mx=0;
        int ans=0;
     unordered_map<int,int>has;
     for(int i : nums)
     {
        has[i]++;
     }   
     for(auto it : has)
     {
        mx=max(mx,it.second);
     }
      for(auto it : has)
     {
        if(mx==it.second)
        {
            ans+=it.second;
        }
     }
        return ans;
    }
};