class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(),ans=0;
        vector<int>ls(3,-1);
        for(int i=0;i<n;i++)
        {
            ls[s[i]-'a']=i;
            if(ls[0]!=-1&&ls[1]!=-1&&ls[2]!=-1)
            {
                ans+=(1+min({ls[2],ls[0],ls[1]}));
            }
        }
        return ans;
    }
};