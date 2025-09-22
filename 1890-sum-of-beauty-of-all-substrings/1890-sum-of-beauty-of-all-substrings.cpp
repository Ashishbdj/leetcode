class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++)
            {
                freq[s[j]-'a']++;
                int mx=0,mn=INT_MAX;
                for(int a : freq)
                {
                    if(a>0)
                    {
                    mx=max(a,mx);
                    mn=min(mn,a);
                    }
                }
                ans+=(mx-mn);
            }
        }
        return ans;
    }
};