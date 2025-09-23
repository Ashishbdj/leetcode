class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0,l=0,r=0,maxfreq=0;
        unordered_map<char,int>mp;
        while(r<s.size())
        {
            mp[s[r]]++;
            maxfreq=max(maxfreq,mp[s[r]]);
            if((r-l+1)-maxfreq>k)
            {
                mp[s[l]]--;
                l++;
            }
                ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};